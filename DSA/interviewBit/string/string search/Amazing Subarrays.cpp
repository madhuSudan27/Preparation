#include<iostream>
#include<vector>
#include<string>
using namespace std;

/* 
You are given a string A, and you have to find all the amazing substrings of A.
An amazing Substring is one that starts with a vowel (a, e, i, o, u, A, E, I, O, U).
Note: Take the mod of the answer with 10003.


Problem Constraints
1 <= |S| <= 106
S can have special characters
 */

bool isVowel (char c){
    return ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
    || (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'));
}

int solve(string A) {
    
    int mod = 10003;
    int n = A.size() , ans = 0 , index = 0;
    while(index < n){
        if(isVowel(A[index])){
            ans =(ans + n - index ) % mod;
        }
        index ++;
    }
    return ans % mod;
}

int main()
{
    return 0;
}