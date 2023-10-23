#include<iostream>
#include<vector>
using namespace std;

/* 
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. 
This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom. 

*/


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // will take n^2 time 
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[i].size();j++){
        //         if(matrix[i][j]==target){
        //             return 1;
        //         }
        //     }
        // }
        // return 0;


        // i can solve using binary searach also 
        for each row call the binary search 
            if element exist then break and return 
        // Time complexity would be O(n* log(m));


        int row=0,col=matrix[0].size()-1;
        int n=matrix.size();

        while(row<n && col>=0){
            if(matrix[row][col]==target) return 1;
            else if(matrix[row][col]>target) col--;
            else row++;
        }
        
        
       
        return 0;
    }
};