#include<iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;


/* 
You have k lists of sorted integers in non-decreasing order. Find the smallest range that includes at least one number from each of the k lists.

We define the range [a, b] is smaller than range [c, d] if b - a < d - c or a < c if b - a == d - c.

 

Example 1:

Input: nums = [[4,10,15,24,26],[0,9,12,20],[5,18,22,30]]
Output: [20,24]
Explanation: 
List 1: [4, 10, 15, 24,26], 24 is in range [20,24].
List 2: [0, 9, 12, 20], 20 is in range [20,24].
List 3: [5, 18, 22, 30], 22 is in range [20,24].
Example 2:

Input: nums = [[1,2,3],[1,2,3],[1,2,3]]
Output: [1,1]
 

Constraints:

nums.length == k
1 <= k <= 3500
1 <= nums[i].length <= 50
-105 <= nums[i][j] <= 105
nums[i] is sorted in non-decreasing order.

 */

int findMinLength(vector<vector<int>>& nums){
    int n = nums.size();
    int len = 51;
    for(auto it: nums){
        int ni = it.size();
        len = min(len, ni);
    }
    return len;
}

vector<int> smallestRange(vector<vector<int>>& nums) {
    int n = nums.size();
    priority_queue< pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>> >pq;
    int maxElement = -1000001;
    int maxRange = INT_MAX;
    vector<int>ans(2,-1);

    // int minArraySize = findMinLength(nums);
    
    for(int index = 0; index < n; index ++){
        pq.push({nums[index][0], {index , 0}});
        maxElement = max(maxElement , nums[index][0]);
    }
    // now i have max element and all the element in pq

    while(true){
        // find the min element ;
        int minElement = pq.top().first;
        int minElementArray = pq.top().second.first;
        int minElementIndex = pq.top().second.second;

        int currRange = maxElement - minElement;
        if(currRange < maxRange){
            ans[0] = minElement;
            ans[1] = maxElement;
            maxRange = currRange;
        }

        // done with min element 
        pq.pop();

        if(minElementIndex + 1 < nums[minElementArray].size()){
            pq.push({nums[minElementArray][minElementIndex + 1] , {minElementArray , minElementIndex + 1}});
            maxElement = max(maxElement , nums[minElementArray][minElementIndex + 1]);
        }
        else{
            break;
        }
    }

    return ans;
        
}

int main(){
    
    // vector<vector<int>> nums = {{4,10,15,24,26},{0,9,12,20},{5,18,22,30}};
    vector<vector<int>> nums ={{1,2,3},{1,2,3},{1,2,3}};
    vector<int> ans= smallestRange(nums);
    for(auto it : ans){
        cout<< it << " ";
    }

    return 0;
}