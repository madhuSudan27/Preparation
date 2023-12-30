#include<iostream>
#include<vector>
#include<string>
using namespace std;

/* 
Given two binary strings A and B. Return their sum (also a binary string).


Problem Constraints
1 <= length of A <= 105

1 <= length of B <= 105

A and B are binary strings

 */

string addBinary(string A, string B) {
    
    //     "1010110111001101101000"
    //  "1000011011000000111100110"
                          
    
    int n = A.size();
    int m = B.size();
    if(n == 0) return B;
    if( m == 0 ) return A;
    string ans = "";
    int end1  = n - 1 , end2 = m - 1;
    int carry = 0;
    while( end1 >= 0 && end2 >= 0){
        int val = (A[end1] - '0' ) + (B[end2] - '0') + carry;
        // if val is 2
        if( val == 2){
            ans.push_back('0');
            carry = 1;
        }
        else if( val == 3){
            ans.push_back('1');
            carry = 1;
        }
        else if( val == 0){
            ans.push_back('0');
            carry = 0;
        }
        else{
            ans.push_back('1');
            carry = 0;
        }
        end1 --;
        end2 --;
    }
    while( end1 >= 0){
        int val = (A[end1] - '0' ) +carry;
        if( val == 2){
            ans.push_back('0');
            carry = 1;
        }
        else if( val == 0){
            ans.push_back('0');
            carry = 0;
        }
        else{
            ans.push_back('1');
            carry = 0;
        }
        end1 --;
        
    }
    while( end2 >= 0){
        int val = (B[end2] - '0' ) +carry;
        if( val == 2){
            ans.push_back('0');
            carry = 1;
        }
        else if( val == 0){
            ans.push_back('0');
            carry = 0;
        }
        else{
            ans.push_back('1');
            carry = 0;
        }
        end2 --; 
    }
    if( carry) ans.push_back('1');
    reverse(ans.begin(),ans.end());
    return ans;
}


string solution(string A , string B){
    int n = A.size();
    int m = B.size();
    if(n == 0) return B;
    if( m == 0 ) return A;
    string ans = "";
    int end1  = n - 1 , end2 = m - 1;
    int carry = 0;
    while( end1 >= 0 || end2 >= 0){
        if( end1 >= 0 && A[end1] == '1') carry ++;
        if( end2 >= 0 && B[end2] == '1') carry ++;
        char c = (carry % 2 ==0)? '0' : '1' ;
        ans.push_back(c);
        carry /= 2;
        end1 --;
        end2 --;
    }
    if( carry) ans.push_back('1');
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    return 0;
}