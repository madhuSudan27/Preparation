/* 
ou are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.

Return the length of the longest substring containing the same letter you can get after performing the above operations.

 

Example 1:

Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.
Example 2:

Input: s = "AABABBA", k = 1
Output: 4
Explanation: Replace the one 'A' in the middle with 'B' and form "AABBBBA".
The substring "BBBB" has the longest repeating letters, which is 4.
There may exists other ways to achieve this answer too. */

#include<iostream>
 #include<vector>
 #include<string>
 #include<unordered_map>
 using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
        // the main aim is to keep track of maximum freq element
        unordered_map<char,int>mp;
        int i=0,j=0,ans=0,n=s.size();
        int maxFreq=0;

        while(i<n){
            mp[s[i]]++;
            maxFreq=max(maxFreq,mp[s[i]]);
            // maxFre with window size;
            int diff=(i-j+1)-maxFreq;
            if(diff<=k) ans=max(ans,i-j+1);
            if(diff>k){
                mp[s[j]]--;
                j++;
            }
            i++;
        }

        return ans;
        
    }
};