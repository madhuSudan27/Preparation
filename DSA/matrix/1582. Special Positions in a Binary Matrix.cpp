#include<iostream>
#include<vector>
using namespace std;

/* 
Given an m x n binary matrix mat, return the number of special positions in mat.

A position (i, j) is called special if mat[i][j] == 1 and all other elements in row i and column j are 0 (rows and columns are 0-indexed).

 */

// brute force approach 

// time complexity is O(n+m)*(n*m)
int numSpecial(vector<vector<int>>& mat) {
    int n=mat.size();
    int m=mat[0].size();
    int ans=0;
    for(int i=0;i<n;i++){
        bool check = 0;
        for (int j = 0;j < m;j++){
            // now need to check 
            if(mat[i][j]==1){
                // then i have toc count 
                check = 1;
                int countRow = 0;
                int countCol = 0;
                for(int ni = 0; ni < n; ni++){
                    if(mat[ni][j]==1) countRow++;
                }
                for(int nj = 0; nj < m; nj++){
                    if(mat[i][nj] == 1) countCol++;
                }
                if(countRow >1 || countCol > 1){ 
                    check = 0;
                }

            }
        }
        if(check) ans++;
    }
    return ans;
    
}

int numSpecial(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size(); 
    // now i have to maintain some db 
    vector<int>rowCount(n);
    vector<int>colCount(m);

    //now i need to update the count of 1 in each col  and each row 
    for(int i=0;i<n; i++){
        for(int j = 0; j<m;j++){
            if(mat[i][j]==1){
                rowCount[i]++;
                colCount[j]++;
            }
        }
    }
    // now again check and count the ans 
    int ans=0;
    for( int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(mat[i][j]==1 && rowCount[i]==1 && colCount[j]==1){
                ans++;
            }

        }
    }
    return ans;
}




int main()
{
    return 0;
}