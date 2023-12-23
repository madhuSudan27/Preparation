#include<iostream>
#include<vector>
using namespace std;
int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int n=nums.size(),i=0,j=0,ans=0,prod=1;
    while(i<n){
        prod*=nums[i];
        while(j<n && prod>=k) prod/=nums[j++];
        if(prod<k) ans+=(i-j+1);
        i++;
    }
    return ans;
    
}

int main()
{
    return 0;
}