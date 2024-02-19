#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    vector<vector<int>> ans;

    priority_queue< pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>> , greater<pair<int,pair<int,int>>> >pq;

    int n = points.size();
    for(int i = 0;i < n; i++){
        int xi = points[i][0] * points[i][0];
        int yi = points[i][1] * points[i][1];
        pq.push({ (xi + yi) , { points[i][0] , points[i][1] } });
    }
    while(! pq.empty() && k > 0){
        
        pair<int,int> temp = pq.top().second;
        ans.push_back({temp.first, temp.second});
        pq.pop();
        k --;
    }
    return ans;
    
}

vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    vector<vector<int>>ans;
    vector<vector<int>>helper;
    for(int i=0;i<points.size();i++){
        int fir=points[i][0]*points[i][0];
        int sec=points[i][1]*points[i][1];
        vector<int>temp(2);
        temp[0]=fir+sec;
        temp[1]=i;
        helper.push_back(temp);
    }
    // now i have the temp 
    // now i can sort the helper 
    sort(helper.begin(),helper.end());
    for(int i=0;i<k;i++){
        ans.push_back(points[helper[i][1]]);
    }
    return ans;
    
    
    
}

int main()
{
    return 0;
}