#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
        // lets assign the cookies greedily 

    sort(g.begin(),g.end());
    sort(s.begin(),s.end());

    int gIndex = 0, sIndex = 0 , n = g.size() , m = s.size();
    int ans = 0;
    while( gIndex < n && sIndex < m){
        if(g[gIndex] <= s[sIndex]){
            ans ++;
            gIndex ++;
        }
        sIndex ++;
    }

    return ans;
}

int main(){
    
    return 0;
}