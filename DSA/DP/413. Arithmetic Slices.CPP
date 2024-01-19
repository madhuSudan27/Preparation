#include<iostream>
#include<vector>
using namespace std;
 int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        // we need at least three element 
        if(n <= 2) return 0;

        int start = 0,curr = 2 , end = n ;
        int prev = nums[1] - nums[0];
        int ans = 0;

        while(curr < end){
            int diff = nums[curr] - nums[curr - 1];
            if(diff == prev ){
                ans += (curr - start - 1);
            }
            else{
                prev = diff ;
                start = curr - 1;
            }

            curr ++;

        }
        return ans;

    }
int main()
{
    return 0;
}