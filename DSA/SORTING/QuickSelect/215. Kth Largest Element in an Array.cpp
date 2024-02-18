#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

// approach 1
int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    return nums[nums.size()-k];
    
}

// approach 2 <- better one 
 int findKthLargestOptimal(vector<int>& nums, int k) {
    priority_queue<int,vector<int>, greater<int> >pq;
    int n = nums.size();
    int index = 0;
    while(index < k){
        pq.push(nums[index]);
        index ++;
    }
    while(index < n){
        if(nums[index] > pq.top()){
            pq.pop();
            pq.push(nums[index]);
        }
        index ++;
    }
    return pq.top();
}
int main(){
    return 0;
}