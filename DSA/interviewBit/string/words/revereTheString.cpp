#include<iostream>
#include<vector>
using namespace std;

/* 

Return the string A after reversing the string word by word.

NOTE:

A sequence of non-space characters constitutes a word.
Your reversed string should not contain leading or trailing spaces, even if it is present in the input string.
If there are multiple spaces between words, reduce them to a single space in the reversed string.
 */

void reverse(string & str){
    int n = str.size();
    int start = 0, end = n-1;
    while(start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start ++;
        end --; 
    }
}

string solve(string A) {
    
    string newString = "";
    
    int i = 0, n = A.size();
    // if initial space is present remove it 
    while(A[i] == 32) i++;
    // now form the word 
    while(i < n){
        string temp = "";
        while( i < n && A[i] != ' '){
            temp.push_back(A[i]);
            i++;
        }
        while(A[i] == ' ') i++;
        // reverse the temp ans push back to newString 
       
        reverse(temp);
        newString += temp ;
        newString.push_back(' ');
    }

    newString.pop_back();
    reverse(newString);
    return newString;  
}

int main()
{
    cout<<solve("the sky is blue");
    return 0;
}