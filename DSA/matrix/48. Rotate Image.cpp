#include<iostream>
#include<vector>
using namespace std;


/* 
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly.
 DO NOT allocate another 2D matrix and do the rotation.

 */
int main()
{
    return 0;
}
 void solve(vector<vector<int>>& matrix){
        int n=matrix.size();
        vector<vector<int>>ans(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            int col=0;
            for(int j=n-1;j>=0;j--) ans[i][col++]=matrix[j][i];
        }
        matrix=ans;
    }
    void rotate(vector<vector<int>>& matrix) {
        // solve(matrix);
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++) reverse(matrix[i].begin(),matrix[i].end());
        
        
    }