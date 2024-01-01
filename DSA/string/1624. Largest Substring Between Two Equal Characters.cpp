#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

/* 
Given a string s, return the length of the longest substring between two equal characters, excluding the two characters. If there is no such substring return -1.

A substring is a contiguous sequence of characters within a string.

 

Example 1:

Input: s = "aa"
Output: 0
Explanation: The optimal substring here is an empty substring between the two 'a's.
Example 2:

Input: s = "abca"
Output: 2
Explanation: The optimal substring here is "bc".
Example 3:

Input: s = "cbzxy"
Output: -1
Explanation: There are no characters that appear twice in s.
 

Constraints:

1 <= s.length <= 300
s contains only lowercase English letters.
 */


int maxLengthBetweenEqualCharacters(string s) {
    int n = s.size();
    // check if(last and first element are same then return )
    if(s[0] == s[n-1]) return n - 2;
    unordered_map<char, vector<int>>mp;

    for(int i = 0; i < n;i++){
        mp[s[i]].push_back(i);
    }
    int ans = -1;
    for(auto it: s){
        if(mp.find(it) != mp.end()){
            vector<int>temp = mp[it];
            if( temp.size() >1){
                ans = max( ans , temp[temp.size()-1] - temp[0] -1);
            }
        }
    }
    return ans;
    
}

int main()
{
    return 0;
}