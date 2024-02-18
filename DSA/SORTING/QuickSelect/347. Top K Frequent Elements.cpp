#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<unordered_map>
using namespace std;

 vector<int> topKFrequent(vector<int>& nums, int k) {
    int n = nums.size();
    unordered_map<int,int>mp;
    for(auto it: nums){
        mp[it] ++;
    }

    priority_queue< pair<int,int> >pq;
    for(auto i= mp.begin(); i != mp.end() ; i++){
        pq.push({i->second , i->first});
    }
    vector<int>ans;
    while(k > 0){
        ans.push_back(pq.top().second);
        pq.pop();
        k --;
    }

    return ans;
    
}

int main()
{
    return 0;
}