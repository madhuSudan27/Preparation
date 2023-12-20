#include<iostream>
#include<vector>
using namespace std;
// one approach is to use bit manupulation 
// another one use hash map for duplicate number 


// use negative approach  
int findDuplicate(vector<int>& nums) {
        // try with constant space 
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            int val=abs(nums[i]);
            if(nums[val-1]<0) return val;
            nums[val-1]*=-1;
        }
        return 0;
        
    }
int main()
{
    return 0;
}