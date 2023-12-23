#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int triangleNumber(vector<int>& nums) {
        int count = 0 , n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 2;i < n;i++){

            int first = 0, last = i-1;

            while(first < last){
                int sum = nums[first] + nums[last];
                if(sum > nums[i]){
                    count += last - first;
                }
                if(sum > nums[i]){
                    last --;
                }
                else first ++;
            }
            
        }
        return count ;
    }
int main()
{
    return 0;
}