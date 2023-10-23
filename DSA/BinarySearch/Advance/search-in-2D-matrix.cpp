/* You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity. */



#include<iostream>
#include<vector>
using namespace std;

 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        /* for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==target) return 1;
            }
        } */
        // use Log(M*N) solution // assume it as one d array and the process the thing 


        // assume hypothetical 1D array and them perform operation on it 
        // suppose a matrix of 3*4 
        // then 

        // 1 2 3 4 
        // 5 6 7 8
        // 9 10 11 12

        // 9/4 <- means i have definitely left 2 rows before (8 elemets)
        // now we can find the column using modulo 

        int low=0,high=n*m-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(matrix[mid/m][mid%m]==target){
                return 1;
            }
            else if(matrix[mid/m][mid%m]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        

        return 0;
    }
};