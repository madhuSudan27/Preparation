#include<iostream>
#include<vector>
using namespace std;


int solution(string customers){
    int n = customers.size();

    vector<int>customerCame(n,0);
    vector<int>noCustomerCame(n, 0);
    if(customers[n - 1] =='Y'){
        customerCame[n - 1 ] = 1;
    }
    for(int index = n - 2; index >= 0; index --){
        customerCame[index] = customerCame[index + 1] + (customers[index] == 'Y');
    }
    if(customers[0] == 'N' ) noCustomerCame[0] = 1;
    for(int index = 1; index < n; index ++){
        noCustomerCame[index] = noCustomerCame[index - 1] + (customers[index] == 'N');
    }

    int penality = customerCame[0], count = 0;
    int ans = 0;
    for(int index = 0; index < n; index  ++){
        if(customers[index] == 'Y') count ++;
        int newPenality = noCustomerCame[index] + (customerCame[0] - count);
        if(newPenality < penality){
            ans = index + 1;
            penality = newPenality;
        }
    }
    return ans;

}
int bestClosingTime(string customers) {

    //lets use prefix sum;
    // int result = solution(customers);
    int n = customers.size();
    vector<int>customer(n, 0);
    vector<int>noCustomer(n, 0);

    if(customers[0] == 'Y'){
        customer[0] = 1;
    }
    else{
        noCustomer[0] = 1;
    }

    for(int index = 1; index < n; index ++){
        customer[index] = customer[index - 1] + (customers[index] == 'Y');
        noCustomer[index] = noCustomer[index - 1] + (customers[index] == 'N');
    }

    int penality = customer[n - 1];
    int result = 0;

    for(int index = 0; index < n; index ++){
        int newPenality = noCustomer[index] + (customer[n-1] - customer[index]);
        // cout<< newPenality <<
        if(newPenality < penality){
            result = index + 1;
            penality  = newPenality;
        }
    }

    return result;
}
int main()
{
    return 0;
}