#include<iostream>
#include<vector>
#include<string>
using namespace std;

/* 
The count-and-say sequence is the sequence of integers beginning as follows: 
1, 11, 21, 1211, 111221, ...
1 is read off as one 1 or 11. 11 is read off as two 1s or 21.
21 is read off as one 2, then one 1 or 1211.

Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.

Example:

if n = 2, the sequence is 11.

*/

string countAndSay(int A) {
    if(A == 1) return "1";
    if(A == 2) return "11";
    string seq = "11" ;
    for(int i = 3 ; i <= A ;i++){
        // lets append a extra character to check 
        // seq.push_back('*');
        int n = seq.size();
        int j = 0;
        string newSeq = "";
        
        while(j < n){
            char curr = seq[j];
            int count = 0;
            while(seq[j] == curr){
                count ++;
                j++;
            }
            newSeq += (to_string(count));
            newSeq.push_back(curr);
        }
        seq = newSeq;
        // seq.pop_back();
        cout<<seq<<endl;
    }
    return "";
    
}

int main()
{
    string ans = countAndSay(4);
    cout<< ans<<"ans ";
    return 0;
}