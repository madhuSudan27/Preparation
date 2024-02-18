#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// this approach is tricky one think about sorting 
// and why this approach passed all the test cases.
void wiggleSort(vector<int>& nums) {
    int n = nums.size();
    if(n == 1) return ;
    sort(nums.begin(), nums.end());
    vector<int>ans(n);
    int index = n-1;    
    for(int i = 1 ; i < n ; i += 2){
        ans[i] = nums[index --];
    }
    for(int i = 0 ;i < n ; i += 2){
        ans[i] = nums[index -- ];
    }
    nums = ans;
}


int main()
{
    return 0;
}