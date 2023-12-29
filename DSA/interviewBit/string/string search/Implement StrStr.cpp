#include<iostream>
#include<vector>
#include<string>
using namespace std;
/* 
Another question which belongs to the category of questions which are intentionally stated vaguely.

Expectation is that you will ask for correct clarification or you will state your assumptions before you start coding.

Implement strStr().

strstr - locate a substring ( needle ) in a string ( haystack ).

Try not to use standard library string functions for this question.

Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

NOTE: String A is haystack, B is needle.

Good clarification questions:

What should be the return value if the needle is empty?
What if both haystack and needle are empty?
For the purpose of this problem, assume that the return value should be -1 in both cases.


Problem Constraints
1 <= |haystack| <= 104
1 <= |needle| <= 103
 */


int strStr(const string A, const string B) {
     int n = A.size() , m = B.size();
    if(m == 0 || n == 0 || m > n) return -1;
    
    // try to find the subString of size m in A 
    
    for(int i = 0;i <= (n - m);i++){
        string subString = A.substr(i , m);
        if( subString == B){
            return i;
        }
    }
    return -1;
}



int main()
{
    return 0;
}