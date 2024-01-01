#include<iostream>
#include<vector>
#include<string>
using namespace std;

/* 
mplement atoi to convert a string to an integer.

Example :

Input : "9 2704"
Output : 9
Note: There might be multiple corner cases here. Clarify all your doubts using “See Expected Output”.

Questions:

Q1. Does string contain whitespace characters before the number?

A. Yes

Q2. Can the string have garbage characters after the number?

A. Yes. Ignore it.

Q3. If no numeric character is found before encountering garbage characters, what should I do?

A. Return 0.

Q4. What if the integer overflows?

A. Return INT_MAX if the number is positive, INT_MIN otherwise.

Warning : DO NOT USE LIBRARY FUNCTION FOR ATOI.

If you do, we will disqualify your submission retroactively and give you penalty points.

*/



bool isDigit(char c){
    return (c >= '0' && c <= '9');
}

int atoi(const string str) {
    int n = str.size();
    int ans = 0;
    int start = 0;
    bool negative = 0;
    
    // lets remove white space
    while( start < n && str[start] ==' '){
        start ++;
    }
    // now we will be left with number 
    // so need to check for +ve or -ve 
    if(str[start] == '-') {
        negative = 1;
        start ++;
    }
    else if( str[start] == '+') start ++;
    
    // again check  if not digit then return 
    if(!isDigit(str[start])){
        return 0;
    }
    // now i can form the number 
    while( start < n  && isDigit(str[start])){
        
        // check for overflo condition 
        // 2147483647  <- INT MAX VALUE 
        if( ans > (INT_MAX / 10) || ( ans  == (INT_MAX/10) && (str[start] - '0') >7 ) ){
            return (negative) ? INT_MIN : INT_MAX;
        }
        
        ans = ans * 10  + str[start] -'0';
        
        start ++;
    }
    
    if(negative) return -ans;
    return ans;   
}


int main()
{
    return 0;
}