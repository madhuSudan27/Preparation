#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// problem description 

/* 

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 
 */



// solution 1
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

    for(auto it:nums2){
        nums1.push_back(it);
    }
    sort(nums1.begin(),nums1.end());
    // 
    int n=nums1.size();
    double med=n%2!=0?nums1[n/2]:(nums1[n/2]+nums1[(n/2)-1])/2.0;
    return med;
}


// Goal reduce the time complexity 

// solution 2 simple merge the array to reduce time complexity now TC=O(n1+n2) still space complexity is O(n)

// solution 3.
    // a better approach reduce the space complexity 
    // i use variables to keep track the two median index 
    // if even then return (firstElement+secondElement)/2.0;
    // if odd then return secondElement/2.0;

    // code:- 

    double  solution(vector<int>& arr1, vector<int>&arr2){
        int n1=arr1.size(),n2=arr2.size();
        int n=n1+n2;
        int firstIndex=(n/2)-1, secondIndex=n/2;
        int firstElement=-1,secondElement=-1;
        int low1=0,low2=0;
        int count=0;
        while(low1<n1 && low2<n2){
            if(arr1[low1]<arr2[low2]){
                if(firstIndex==count) firstElement=arr1[low1];
                if(secondIndex==count) secondElement=arr1[low1];
                count++;
                low1++;
            }
            else{
                if(firstIndex==count) firstElement=arr2[low2];
                if(secondIndex==count) secondElement=arr2[low2];
                count++;
                low2++;
            }
        }

        while(low1<n1){
            if(firstIndex==count) firstElement=arr1[low1];
            if(secondIndex==count) secondElement=arr1[low1];
            count++;
            low1++;
        }
        while(low2<n2){
            if(firstIndex==count) firstElement=arr2[low2];
            if(secondIndex==count) secondElement=arr2[low2];
            count++;
            low2++;
        }

        if(n%2==0) return (firstElement+secondElement)/2.0;
        else return secondElement*1.0;

    }



// solution 4. 

// use binary search 


