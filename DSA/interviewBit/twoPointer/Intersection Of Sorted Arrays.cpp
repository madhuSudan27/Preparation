#include<iostream>
#include<vector>
using namespace std;

// multiple array concept 

/* 


Find the intersection of two sorted arrays OR in other words, given 2 sorted arrays, find all the elements which occur in both arrays.

NOTE: For the purpose of this problem ( as also conveyed by the sample case ), assume that elements that appear more than once in both arrays should be included multiple times in the final output.



Problem Constraints
1 <= |A| <= 106
1 <= |B| <= 106


Input Format
The first argument is an integer array A.
The second argument is an integer array B.


Output Format
Return an array of intersection of the two arrays.


Example Input
Input 1:
A: [1 2 3 3 4 5 6]
B: [3 3 5]

Input 2:
A: [1 2 3 3 4 5 6]
B: [3 5]
 */
vector<int> Solution(const vector<int> &arr1 , const vector<int> &arr2) {
    int n = arr1.size() , m = arr2.size();
    
    vector<int>ans;
    int i = 0, j = 0;
    while(i < n &&  j < m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if( arr1[i] > arr2[j]){
            j++;
        }
        else{
            i++;
        }
        
    }
    return ans;
}

int main()
{
    return 0;
}