#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

/* 

You are given a string s. We want to partition the string into as many parts as possible so that each letter appears in at most one part.

Note that the partition is done so that after concatenating all the parts in order, the resultant string should be s.

Return a list of integers representing the size of these parts.

 

Example 1:

Input: s = "ababcbacadefegdehijhklij"
Output: [9,7,8]
Explanation:
The partition is "ababcbaca", "defegde", "hijhklij".
This is a partition so that each letter appears in at most one part.
A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits s into less parts.
Example 2:

Input: s = "eccbbbbdec"
Output: [10]
 */


vector<int> partitionLabels(string s) {
    // approach 1 
    // we can use map to keep the track of freq 
        // traversing the string check if all the prev element freq is zero in map then remove it from map ;
        // at a same time maintain a set 
        // if all the set elements does not exist in map then we got an ans 

    // another approach 

    unordered_map<int,int > mp;
    for(int i = 0; i < s.size() ; i++){
        mp[s[i]] = i;
    }
    vector<int>ans;
    int start = 0 , maxPresence= 0; 
    for(int i = 0 ;i < s.size(); i++){
        maxPresence = max(maxPresence , mp[s[i]]);
        if( maxPresence == i){
            ans.push_back(i - start +1);
            start = i+1;
        }
    }
    return ans;
    
}
int main()
{
    return 0;
}