#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(-2147483648 == n){
        cout<<-214748364<<endl;
        return 0;
    }
    if(n > 0){
        cout << n <<endl;
    }
    else{
        // we have two option
        // either remove last 
        // second last
        n = n* -1;

        int last = n % 10 ;
        int secondLast= (n%100) / 10;
        if(secondLast < last){
            cout<<(n/10) * -1<<endl;
        }
        else{
            int newNum = n/100;
            cout<<(newNum*10 + last) * -1;
        }
    }
    return 0;
}