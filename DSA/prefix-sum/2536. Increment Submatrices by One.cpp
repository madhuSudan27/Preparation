#include<iostream>
#include<vector>
using namespace std;
int n;

vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {

    vector<vector<int>>mat(n, vector<int>(n, 0));
    int m = queries.size();

    for(int index = 0; index < m; index ++){

        int rowStart = queries[index][0];
        int colStart = queries[index][1];
        int rowEnd = queries[index][2];
        int colEnd = queries[index][3];

        for(int rowIndex = rowStart; rowIndex <= rowEnd; rowIndex ++ ){
            for(int colIndex = colStart; colIndex <= colEnd; colIndex ++){
                mat[rowIndex][colIndex] ++;
            }
        }
    }
    return mat;
}

int main()
{
    return 0;
}