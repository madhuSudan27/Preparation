#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

vector<vector<int>> buildPrefix(vector<vector<int>>& matrix, int n, int m){
    vector< vector<int> > prefix(n, vector<int>(m, 0));
    prefix[0][0] = matrix[0][0];

    for(int colIndex = 1; colIndex < m; colIndex ++){
        prefix[0][colIndex] = prefix[0][colIndex - 1] + matrix[0][colIndex]; 
    }
    for(int rowIndex = 1; rowIndex < n; rowIndex ++){
        prefix[rowIndex][0] = prefix[rowIndex - 1][0] + matrix[rowIndex][0]; 
    }

    for(int rowIndex = 1; rowIndex < n; rowIndex ++ ){
        for( int colIndex = 1; colIndex < m; colIndex ++){
            prefix[rowIndex][colIndex] = prefix[rowIndex - 1][colIndex] + 
            prefix[rowIndex][colIndex - 1] - prefix[rowIndex - 1][colIndex - 1] + matrix[rowIndex][colIndex];
        }
    }
    return prefix;
}

int calculateSum(vector<vector<int>>& matrix ,int row, int rowSize, int col , int colSize ){
    int sum = 0;
    for(int rowIndex =row; rowIndex < (row + rowSize); rowIndex++ ){
        for(int colIndex = col; colIndex < (col + colSize); colIndex ++){
            sum += matrix[rowIndex][colIndex] ;
        }
    }
    return sum;
}

int  subMatrix(vector<vector<int>>& matrix ,int n, int m , int target){
    int ans = 0;
    for(int row = 0; row < n; row ++){
        for(int rowSize = 1;rowSize + row <= n; rowSize ++ ){
            for(int col = 0; col < m; col ++){
                for(int colSize = 1; colSize + col <= m; colSize ++){
                    if(calculateSum(matrix , row, rowSize, col , colSize) == target){
                        ans ++;
                    }
                }
            }
        }
    }
    return ans;
}





int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();
    int ans = 0;

    // vector< vector<int>> prefixMatrix = buildPrefix(matrix, n,m);

    // now i can work on prefix matrix 
    // int ans = subMatrix(matrix, n, m, target);

    for(int row = 0; row < n; row ++){
        for(int col = 1; col < m; col ++){
            matrix[row][col] = matrix[row][col - 1] + matrix[row][col];
        }
    }
    // now i have prefix matrix 

    for(int colStart = 0; colStart < m; colStart ++){
        for(int colEnd = colStart ; colEnd < m ; colEnd ++){
            for(int rowStart = 0; rowStart < n ; rowStart ++){
                int sum = 0;
                for(int rowEnd = rowStart ; rowEnd < n; rowEnd ++){
                    sum += matrix[rowEnd][colEnd] - (colStart > 0 ? matrix[rowEnd][colStart - 1] : 0);
                    // cout<<sum <<" ";
                    if(sum == target) ans ++;
                }
                cout<<endl;
            }
            
        }
    }


    return ans;
    
}
};
int main()
{
    return 0;
}