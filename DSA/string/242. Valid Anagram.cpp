#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

 bool isAnagram(string s, string t) {
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
int main()
{
    return 0;
}