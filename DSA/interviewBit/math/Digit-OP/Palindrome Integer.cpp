#include<iostream>
#include<vector>
using namespace std;


int reverse(int num){
    int ans = 0;
    while(num > 0)
    {
        int rem= num % 10;
        ans = ans * 10 + rem;
        num /= 10;
    }
    return ans;
    
}

int isPalindrome(int A) {
    
    // base case 
        //1. negative number are not pelindrome 
    if(A < 0) return 0;
    if(A >= 0 && A < 10) return 1;
    
    int newNumber = reverse(A);
    
    return newNumber == A;
}

int main()
{
    return 0;
}