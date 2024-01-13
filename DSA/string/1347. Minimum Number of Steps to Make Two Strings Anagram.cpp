#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

int minSteps(string s, string t) {

    unordered_map<int,int>mp;
    for(auto it: s){
        mp[it] ++;
    }

    for(auto it: t){
        mp[it] --;
    }

    int ans = 0;

    for(auto it: mp){
        if(it.second> 0){
            ans += it.second;
        }
    }
    return ans;
    
}
int main()
{
    return 0;
}