#include<iostream>
#include<vector>
#include<string>
using namespace std;
// Given a positive integer A, return its corresponding column title as appear in an Excel sheet.

string convertToTitle(int A) {
    if(A == 0) return "";
    string ans= "";
    while(A >0){
        //28 -> 2
        // need to decrease A by one to deal with Z 
        // since 26 % 26 == 0 <- we are lost with Z
        
        A --;
        int rem = A % 26;
        
        // now i have to add digit 
        ans = char(65 + rem)+ ans;
        A /= 26;
    }
    return ans;
}

int main()
{
    return 0;
}