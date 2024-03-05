#include<iostream>
#include<vector>

using namespace std;


// function for prefix sum 
void prefixSumMatrix(vector<vector< long long >>& matrix){
    long long  n = matrix.size();
    long long  m = matrix[0].size();

    // sum row wise 
    for(long long  row = 0; row < n; row ++){
        for(long long  col = 1; col < m; col ++){
            matrix[row][col] += matrix[row][col - 1]; 
        }
    }
    // sum col wise 
    for(long long  col = 0; col < m; col ++){
        for(long long  row = 1; row < n; row ++){
            matrix[row][col] += matrix[row - 1][col]; 
        }
    }
}
// sum the matrix 
void sumMatrix(vector<vector<long long >>& matrixA, vector<vector<long long >>& matrixB){
    long long  n = matrixA.size();
    long long  m = matrixA[0].size();

    // sum row wise 
    for(long long  row = 0; row < n; row ++){
        for(long long  col = 0; col < m; col ++){
            matrixA[row][col] = matrixA[row][col] + matrixB[row][col]; 
        }
    }
}


long long  result(vector<vector<long long >>& matrix , long long  r1, long long  c1 ,long long  r2, long long  c2){

    if(r1 == 0 && c1 == 0){
        return matrix[r2][c2];
    }
    else if(r1 == 0){
        return matrix[r2][c2] - matrix[r2][c1 - 1];
    }
    else if(c1 == 0){
        return matrix[r2][c2] - matrix[r1 - 1][c2];
    }
    else{
        return (matrix[r2][c2] - matrix[r1 - 1][c2] - matrix[r2][ c1 - 1] + matrix[r1 - 1][c1 - 1]);
    }

}


int  main(){
    long long  n , m, u, q;
    cin >> n >> m >> u >> q;
    vector<vector<long long >> matrix(n, vector<long long >(m,0));
    for(long long  rowStart = 0; rowStart < n; rowStart ++){
        for(long long  colStart = 0; colStart < m; colStart ++){
            cin >> matrix[rowStart][colStart];
        }
    }


    vector<vector<long long >> helper(n + 1, vector<long long >(m + 1 , 0));
    while(u --){
        long long  k , r1, c1 , r2, c2;
        cin >> k >> r1 >> c1 >> r2 >> c2;

        // we can update the thing like this to make scanning algorithm efficient ;
        helper[r1][c1] += k;
        helper[r1][c2 + 1] -= k;
        helper[r2 + 1][c1] -= k;
        helper[r2 + 1][c2 + 1] += k;
    }
    // after that 
    // just do prefix sum 
    prefixSumMatrix(helper);
    sumMatrix(matrix , helper);
    // now we have updated one 
    prefixSumMatrix(matrix);

    while( q --){
        long long   r1, c1 , r2, c2;
        cin  >> r1 >> c1 >> r2 >> c2;
        // go and do stuff 
        // just query 
        cout<< result(matrix , r1, c1, r2, c2)<<endl;
    }

    return 0;
}