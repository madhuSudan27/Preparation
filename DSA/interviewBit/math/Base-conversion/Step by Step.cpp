#include<iostream>
#include<vector>
using namespace std;

/*

Given a column title A as appears in an Excel sheet, return its corresponding column number.



Problem Constraints
1 <= |A| <= 100



Input Format
First and only argument is string A.



Output Format
Return an integer



Example Input
Input 1:

 "A"
Input 2:

 "AB"


Example Output
Output 1:

 1
Output 2:

 28
 */

int titleToNumber(string A) {
    int colNumber= 0;
    int n = A.size();
    int ans = 0;
   
    int index = 0;
    for(int i = n-1 ;i >= 0 ;i--){
        int dig= A[i] - 'A' +1;
        ans += pow(26, index) * dig;
        index ++;
    }
    
    return ans;
}

int main()
{
    return 0;
}