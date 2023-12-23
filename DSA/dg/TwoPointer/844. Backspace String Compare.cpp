#include<iostream>
#include<string>
#include<vector>
using namespace std;
/* 

Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.
Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
Example 2:

Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".
Example 3:

Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b" */



class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // i can solve it using stack 
        /*
        stack<char>s1;
        stack<char>s2;
        for(int i=0;i<s.length();i++){
            if(!s1.empty()&&s[i]=='#'){
                // then i have to pop
                s1.pop();
            }
            else if(s[i]=='#'){
                continue;
            }
            else{
                s1.push(s[i]);
            }
            
        }
        for(int i=0;i<t.length();i++){
            if(!s2.empty()&& t[i]=='#'){
                // then i have to pop
                s2.pop();
            }
            else if(t[i]=='#'){
                continue;
            }
            else{
                s2.push(t[i]);
            }
        }
        string fir="";
        string sec="";
        while(!s1.empty()){
            fir+=s1.top();
            s1.pop();
        }
         while(!s2.empty()){
            sec+=s2.top();
            s2.pop();
        }
        return fir==sec;
        */
        
         
        // now i  am trying to reduce the space complexity 
        int p=0,q=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
                p--;
                if(p<0){
                    p=0;
                }
            }
            else{
                s[p++]=s[i];
            }
        }
        // now i havt odo same thing for t 
        for(int i=0;i<t.length();i++){
            if(t[i]=='#'){
                q--;
                if(q<0){
                    q=0;
                }
            }
            else{
                t[q++]=t[i];
            }
        }
        // now i have both the ans
        if(p!=q){
            return false;
        }
        else{
            for(int i=0;i<p;i++){
                if(s[i]!=t[i]){
                    return 0;
                }
            }
        }
        
        return 1;
    }
};