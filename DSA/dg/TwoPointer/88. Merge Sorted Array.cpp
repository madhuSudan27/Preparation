#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index=n+m-1, n1=m-1, n2=n-1;
        while(n1 >= 0 && n2 >= 0){
            if(nums1[n1] <= nums2[n2]) nums1[index--] = nums2[n2--];
            else nums1[index--] = nums1[n1--];
        }
        while(n1>=0) nums1[index--] = nums1[n1--];
        while(n2>=0) nums1[index--] = nums2[n2--];
        
    }

int main()
{
    return 0;
}