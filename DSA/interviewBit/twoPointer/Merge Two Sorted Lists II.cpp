#include<iostream>
#include<vector>
using namespace std;

void Solution(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size(), m = B.size();
    int i = 0, j = 0;
    vector<int>temp;
    while(i < n && j < m){
        // now i have to check and swap 
        if(A[i] <= B[j]){
            // needd to swap and update 
            temp.push_back(A[i]);
            i++;
        }
        else{
            temp.push_back(B[j]);
            j++;
        }
    }
    while( i < n){
        temp.push_back(A[i++]);
    }
    while(j < m){
        temp.push_back(B[j++]);
    }
    A = temp;
}

int main()
{
    return 0;
}