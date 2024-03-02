#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<long long > solution(vector<int>& nums){
    int n = nums.size();
    vector<long long > ans(n , 0);
    unordered_map<int, vector<int> >mp;
    for(int i = 0; i < n; i++){
        mp[nums[i]].push_back(i);
    }

    // now i have all the index in the form 
    // <element, array of index >

    for(int i = 0; i < n; i++){
        auto arr = mp[nums[i]];
        for(auto it: arr){
            ans[i] += abs(i - it);
        }
    }
    return ans;
}

vector< long long > optimizedSolution(vector<int>& nums){
    int n = nums.size();
    vector<long long > ans(n , 0);
    unordered_map<int, vector<int> >mp;
    for(int i = 0; i < n; i++){
        mp[nums[i]].push_back(i);
    }

    // our map has all the required field 

    for(auto it : mp){
        int ele = it.first;
        vector<int> arr = it.second;

        long long  totalSum = 0 ;
        for(auto it : arr){
            totalSum += it;
        }

        long long  prevSum = 0;
        for(int index = 0; index < arr.size(); index ++){
            // leftSum = element  * currIndex  - prevSum 
            long long left = (arr[index] *1LL * index ) - prevSum;
            // right sum = totalSum - prevSum - curr index contribution to totalSum 
            long long right = totalSum - prevSum -  (arr[index]* 1LL *(arr.size() - index) ) ;

            ans[arr[index]] = left + right;
            prevSum += arr[index];  
        }

    }

    return ans;
}


vector<long long> distance(vector<int>& nums) {
    int n = nums.size();
    vector< long long >ans(n);
    unordered_map<int, long long > leftSum, rightSum, leftCount, rightCount;

    for(int index = 0; index < n; index++){
        // same approach as the previous solution for the left 
        ans[index] = leftCount[nums[index]] * index - leftSum[nums[index]];

        leftSum[nums[index]] += index;
        leftCount[nums[index]] ++;
    }
    for(int index = n -1 ; index >= 0; index--){
        
        ans[index] += rightSum[nums[index]] - rightCount[nums[index]] * index ; 
        rightSum[nums[index]] += index;
        rightCount[nums[index]] ++;
    }
    return ans;
}

int main()
{
    return 0;
}