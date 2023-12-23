#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    
    int n = A.size(), m = B.size(), p = C.size();
    int i = 0, j = 0, k = 0;
    int ans = INT_MAX;
    while(i < n && j < m && k < p){
        int minimum = min(A[i], min(B[j], C[k]));
        int maximum = max(A[i], max(B[j], C[k]));
        ans = min(ans , maximum - minimum);
        if(minimum == A[i]) i++;
        else if( minimum == B[j]) j++;
        else k++;
    }
    return ans;
}


int main()
{
    return 0;
}