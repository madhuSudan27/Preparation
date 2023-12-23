#include<iostream>
#include<vector>
using namespace std;

/* 

Given an array A and a value B, remove all the instances of that value in the array.
Also, return the number of elements left in the array after the operation. It does not matter what is left beyond the expected length.
Try to do it in less than linear additional space complexity.


Problem Constraints
1 <= |A| <= 106
0 <= Ai , B <= 2 * 109


Input Format
The first argument is an integer array A.
The second argument is an integer B.


Output Format
Return an integer denoting the number of elements left in the array after the operation, also update the given array A.


Example Input
A = [4, 1, 1, 2, 1, 3]
B = 1
 */

int Solution(vector<int> &arr, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int index = 0;
    int n = arr.size(), j = 0;
    while( j < n){
        if(arr[j] != B){
            arr[index] = arr[j];
            index ++;
        }
        j++;
    }
    return index;
}

int main()
{
    return 0;
}