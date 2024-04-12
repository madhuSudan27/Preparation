#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;


static bool comp(pair<int,int>& a, pair<int,int>& b){
    return a.first > b.first;
}
long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
    int n = nums1.size();

    long long int  ans = 0 , sum = 0;
    vector<pair<int,int>>helper;

    for(int index = 0; index < n; index ++){
        helper.push_back({nums2[index], nums1[index]});
    }
    sort(helper.begin(), helper.end(),comp);
    priority_queue<int,vector<int>,greater<int>> pq;
    for(auto it : helper){
        pq.push(it.second);
        sum += it.second;
        while(pq.size() > k){
            sum -= pq.top();
            pq.pop();
        }
        if(pq.size() == k){
            ans = max(ans , sum * it.first);
        }
    }

    
    return ans;

}

int main()
{
    return 0;
}