#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

/* 

An additive number is a string whose digits can form an additive sequence.

A valid additive sequence should contain at least three numbers. Except for the first two numbers, each subsequent number in the sequence must be the sum of the preceding two.

Given a string containing only digits, return true if it is an additive number or false otherwise.

Note: Numbers in the additive sequence cannot have leading zeros, so sequence 1, 2, 03 or 1, 02, 3 is invalid.

 

Example 1:

Input: "112358"
Output: true
Explanation: 
The digits can form an additive sequence: 1, 1, 2, 3, 5, 8. 
1 + 1 = 2, 1 + 2 = 3, 2 + 3 = 5, 3 + 5 = 8
Example 2:

Input: "199100199"
Output: true
Explanation: 
The additive sequence is: 1, 99, 100, 199. 
1 + 99 = 100, 99 + 100 = 199 */


class Solution {
public:
    // int lengthOfLongestSubstring(string s) {

    //     int i=0,j=0,n=s.size(),ans=0;
    //     unordered_map<char,int>mp;
    //     while(i<n){
    //         // check does ith alphabet is present in the map or not
    //         /* if(mp.find(s[i])!=mp.end()){
    //             cout<<i;
    //             // the i have to remove all the elemet before that character 
    //             while(j<n && s[i]!=s[j]){
    //                 mp.erase(s[j]);
    //                 j++;
    //             }
    //             mp.erase(s[j]);
    //             j++;

    //         } */
    //         mp[s[i]]++;

    //         ans=max(ans,i-j+1);
    //         i++;
    //     }

    //     return ans;

        
    // }


    int lengthOfLongestSubstring(string s){
        unordered_map<char,int>mp;
        int n=s.size(),i=0,j=0,ans=0;
        while(i<n){
            mp[s[i]]++;
            if(mp.size()==(i-j+1)){// window size
                ans=max(ans,(i-j+1));
            }
            else if(mp.size()<(i-j+1)){// then i have to maintain my window size
                while(mp.size()!=(i-j+1)){
                    // mp.erase(s[j]); // will not work aab is the exception 
                    mp[s[j]]--;
                    if(mp[s[j]]==0) mp.erase(s[j]);
                    j++;
                }
            }

            i++;
        }

        return ans;
    }
};