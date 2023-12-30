#include<iostream>
#include<vector>
using namespace std;

/* 
Given an integer A, convert it to a roman numeral, and return a string corresponding to its roman numeral version

Note : This question has a lot of scope of clarification from the interviewer. Please take a moment to think of all the needed clarifications and see the expected response using “See Expected Output”

For the purpose of this question, https://projecteuler.net/about=roman_numerals has very detailed explanations.




Input Format

The only argument given is integer A.
Output Format

Return a string denoting roman numeral version of A.
Constraints

1 <= A <= 3999
 */

// three rule to make any roman  number 
// 1 .Numerals must be arranged in descending order of size.
// 2 .M, C, and X cannot be equalled or exceeded by smaller denominations.
// 3 .D, L, and V can each only appear once.

string intToRoman(int A) {
    // lets make some roman string  because i have to make each indivisually 
    vector<string>ones = {"" ,"I" ,"II" , "III" ,"IV" ,"V" ,"VI" ,"VII" ,"VIII", "IX"};
    vector<string>tens = {"" ,"X" ,"XX" ,"XXX" ,"XL","L" ,"LX" , "LXX" ,"LXXX" ,"XC"};
    vector<string> hundreds = {"" ,"C" ,"CC","CCC","CD" ,"D" ,"DC" ,"DCC" ,"DCCC" ,"CM"};
    vector<string> thousands = {"" ,"M" ,"MM" ,"MMM"};
    
    string ans = thousands[(A/1000)] +hundreds[(A%1000)/100] + tens[(A%100)/10] + ones[A%10];
    return ans;
}


int main()
{
    return 0;
}