#include<iostream>
#include<vector>
#include<string>
using namespace std;

/* 
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P.......A........H.......N
..A..P....L....S....I...I....G
....Y.........I........R
And then read line by line: PAHNAPLSIIGYIR

Write the code that will take a string and make this conversion given a number of rows:

string convert(string text, int nRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR"
**Example 2 : **

ABCD, 2 can be written as

A....C
...B....D
and hence the answer would be ACBD.
*/

string Solution(string str, int B) {
    int n = str.size();
    
    // lets make the pattern 
    if(B == 1 || n == B) return str;
   
    
    vector<vector<int>>pattern(B, vector<int>(n,'*'));
    
    int row = 0;
    int direction = 1;
    for(int i = 0; i<n ;i++){
        pattern[row][i] = str[i];
        // move backWard 
        if( row == B-1) direction = -1;
        if( row == 0) direction = 1;
        row += direction;
    }
    // my pattern is complete 
    // now need to form the ans 
    
    string ans ="";
    
    for( auto it : pattern){
        for( auto i : it){
            if(i != '*') ans.push_back(i);
        }
    }
    
    return ans;
    
}

int main()
{
    return 0;
}