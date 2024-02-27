#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

/* 

Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Example 2:

Input: strs = [""]
Output: [[""]]
Example 3:

Input: strs = ["a"]
Output: [["a"]]
 */

 bool anagram(string s, string t){
    if(s.size()!=t.size()) return 0;
    unordered_map<char, int>mp;
    for(auto it:s) mp[it]++;
    for(auto it:t){
        if(mp.find(it)!=mp.end()){
            mp[it]--;
            if(mp[it]==0) mp.erase(it);
        }
        else return 0;
    }
    return mp.size()==0;
}
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>>ans;
    /* vector<bool>check(strs.size(),0);
    for(int i=0;i<strs.size();i++){
        if(!check[i]){
            check[i]=1;
            vector<string>temp;
            for(int j=i+1;j<strs.size();j++){
                if(!check[j])
                    if(anagram(strs[i],strs[j])) temp.push_back(strs[j]),check[j]=1;
            }
            temp.push_back(strs[i]);
            ans.push_back(temp);
            
        }
    } */

    unordered_map<string, vector<string>>mp;
    for(int i = 0 ;i<strs.size(); i++){
        string temp = strs[i];
        sort(temp.begin(), temp.end());
        mp[temp].push_back(strs[i]);
    }   
    for(auto it: mp){
        ans.push_back(it.second);
    }

    return ans;

    
}


int main()
{
    return 0;
}