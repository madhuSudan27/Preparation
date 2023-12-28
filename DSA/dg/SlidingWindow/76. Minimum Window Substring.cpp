#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


string minWindow(string s, string t) {
    unordered_map<char, int> mp;
    int start = 0, end = 0, n = s.size();
    int subStringLength = n + 1;
    int ansStart = -1;

    for(auto it: t){
        mp[it] ++;
    }

    //  a count to keep track of character in t 
    int count = mp.size();


    while(end < n){
        if(mp.find(s[end]) != mp.end()){
            mp[s[end]] --;
            if( mp[s[end]] == 0) count --;
        }
        // now if the count is 0 then need to slide the window 
        while(count == 0){
            // need to find smallest subString 
            if((end - start + 1) < subStringLength){
                ansStart = start ;
                subStringLength = end - start + 1;
            }

            if(mp.find(s[start]) != mp.end()){
                if(mp[s[start]] == 0) count ++;
                mp[s[start]] ++;
            }
            start ++;
        }
        end++;
    } 
    return subStringLength == n+1 ? "" : s.substr(ansStart , subStringLength);
    
}

int main()
{
    return 0;
}