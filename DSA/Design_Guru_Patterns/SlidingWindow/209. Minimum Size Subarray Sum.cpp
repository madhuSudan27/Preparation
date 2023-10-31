class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,n=nums.size();
        int sum=0,length=n+1;
        while(j<n){
            sum+=nums[j];
            if(sum>=target) length=min(length,j-i+1); 
            while(i<n && sum>target){
                sum-=nums[i++];
                if(sum>=target) length=min(length,j-i+1);

            }
            j++;
        }
        return length==n+1 ? 0:length;

        
    }
};