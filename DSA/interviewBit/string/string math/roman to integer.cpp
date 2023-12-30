#include<iostream>
#include<vector>
#include<string>
using namespace std;
/* 
Given a string A representing a roman numeral.

Convert A into integer.

A is guaranteed to be within the range from 1 to 3999.

NOTE: Read more 

details about roman numerals at Roman Numeric System




Input Format

The only argument given is string A.
Output Format

Return an integer which is the integer verison of roman numeral string.
For Example

Input 1:
    A = "XIV"
Output 1:
    14

Input 2:
    A = "XX"
Output 2:
    20
 */

int convert(char roman){
    if( roman == 'I'){
        return 1;
    }
    else if (roman == 'V'){
        return 5;
    }
    else if ( roman == 'X'){
        return 10;
    }
    else if( roman == 'L'){
        return 50;
    }
    else if (roman == 'C'){
        return 100;
    }
    else if( roman == 'D'){
        return 500;
    }
    else return 1000;
}

int romanToInt(string A) {
    // start reading from the last 
    int integer =  0;
    
    int prev = 0;
    int n = A.size();
    
    for(int i = 0; i < n ;i++){
        int current = convert(A[i]);
        if( current > prev){
            // i need to change
            integer += current;
            integer = integer - 2* prev;
            prev = current; 
        }
        else {
            integer += current;
            prev = current;
        }
    }
    return integer;
    
    
}

int main()
{
    return 0;
}