#include<iostream>
#include<vector>
using namespace std;
/* 
An image smoother is a filter of the size 3 x 3 that can be applied to each cell of an image by 
rounding down the average of the cell and the eight surrounding cells (i.e., the average of the 
nine cells in the blue smoother). If one or more of the surrounding cells of a cell is not present,we do 
not consider it in the average (i.e., the average of the four cells in the red smoother).
 */
int main()
{
    return 0;
}

class Solution {
public:
    bool isValid(int i, int j, int m, int n){
        return (i >= 0 && i < m && j >= 0 && j < n);
    }
    int dir[8][2]={{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1}};

    int smooth(vector<vector<int>>&img, int i,int j, int m ,int n){
        int avg = img[i][j],count = 1;
        for(int k=0 ;k<8 ;k++){
            int ni = i+dir[k][0];
            int nj = j+dir[k][1];
            if(isValid(ni, nj, m,n)){
                count ++;
                avg += img[ni][nj];
            }
        }
        return floor(avg/count);

    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {

        int m = img.size();
        int n = img[0].size();
        // for each cell i have to claculate and then update 
        // so
        vector<vector<int>>ans(m,vector<int>(n));
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                // call the function smoother 
                ans[i][j] = smooth(img, i, j, m, n);
            }
        }
        return ans;
        
    }
};