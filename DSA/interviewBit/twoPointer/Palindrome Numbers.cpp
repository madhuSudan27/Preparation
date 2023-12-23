#include<iostream>
#include<vector>
using namespace std;

/* 

Given two integers A and B which represent an integer range [A, B].
Find the maximum number of distinct palindromic integers we can take from the given range,
such that the absolute difference between any two integers doesn't exceed C.
 */

int reverse(int n){
    int ans = 0;
    while(n > 0){
        int rem = n % 10;
        ans = ans * 10 + rem;
        n/= 10;
    }
    return ans;
}

bool isPalindrome(int n){
    int reversedInt = reverse(n);
    return reversedInt == n;
}

int solve(int A, int B, int C) {
    // maintain th erange of c and then calculate 
    
    int ans = 0;
    
    int i = A , j = A ;
    int count = 0;
    while( j <= B){
        if( isPalindrome(j)){
            count ++;
        }
        while( j <= B && j - i > C ){
            if(isPalindrome(i)){
                count --;
            }
            i++;
        }
        ans = max( ans, count);
        j++;
    }
    return ans;
    
}

int main()
{
    return 0;
}