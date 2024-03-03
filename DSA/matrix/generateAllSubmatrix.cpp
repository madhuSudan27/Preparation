#include<iostream>
#include<vector>
using namespace std;


int  subMatrix(vector<vector<int>>& matrix ,int n, int m , int target){
    int ans = 0;
    for(int row = 0; row < n; row ++){
        for(int rowSize = 1;rowSize + row <= n; rowSize ++ ){
            for(int col = 0; col < m; col ++){
                for(int colSize = 1; colSize + col <= m; colSize ++){
                    // what ever you want to do you can do 
                }
            }
        }
    }
    return ans;
}

int main()
{
    return 0;
}