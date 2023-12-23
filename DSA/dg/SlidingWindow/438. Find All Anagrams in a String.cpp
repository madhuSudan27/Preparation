#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;


class Solution {
public:


    vector<int>solution(string s, string p){
        // i have to optimize the space 
        int n=s.size(),m=p.size();
        vector<int>check(26,0),freq(26,0),ans;

        for(auto it:p) check[it-'a']++;
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
            // if the window size is>m then i have to shrink 
            if(i>=m) freq[s[i-m]-'a']--;
            if(check==freq) ans.push_back(i-m+1);
        }

        return ans;


    }
    vector<int> findAnagrams(string s, string p) {
        // unordered_map<char, int>mp;
        // for(auto it:p) mp[it]++;
        // vector<int>ans;
        // int n=s.size(),m=p.size();
        // int i=0,j=0;
        // unordered_map<char,int>temp;
        // while(j<n){
        //     temp[s[j]]++;
        //     while(i<n && (j-i+1)>m){
        //         temp[s[i]]--;
        //         if(temp[s[i]]==0){
        //             temp.erase(s[i]);
        //         }
        //         i++;
        //     }
        //     if(temp==mp) ans.push_back(i);
        //     j++;
        // }
        // return ans;

        return solution(s,p);
        
    }
};