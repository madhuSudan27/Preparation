
// function for prefix sum 
void prefixSumMatrix(vector<vector<int>>& matrix){
    int n = matrix.size();
    int m = matrix[0].size();

    // sum row wise 
    for(int row = 0; row < n; row ++){
        for(int col = 1; col < m; col ++){
            matrix[row][col] += matrix[row][col - 1]; 
        }
    }
    // sum col wise 
    for(int col = 0; col < m; col ++){
        for(int row = 1; row < n; row ++){
            matrix[row][col] += matrix[row - 1][col]; 
        }
    }
}
// sum the matrix 
void sumMatrix(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB){
    int n = matrixA.size();
    int m = matrixA[0].size();

    // sum row wise 
    for(int row = 0; row < n; row ++){
        for(int col = 0; col < m; col ++){
            matrixA[row][col] = matrixA[row][col] + matrixB[row][col]; 
        }
    }
}


int result(vector<vector<int>>& matrix , int r1, int c1 ,int r2, int c2){

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


int main(){
    int n , m, u, q;
    cin >> n >> m >> u >> q;
    vector<vector<int>> matrix(n, vector<int>(m,0));
    for(int rowStart = 0; rowStart < n; rowStart ++){
        for(int colStart = 0; colStart < m; colStart ++){
            cin >> matrix[rowStart][colStart];
        }
    }


    vector<vector<int>> helper(n + 1, vector<int>(m + 1 , 0));
    while(u --){
        int k , r1, c1 , r2, c2;
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
        int  r1, c1 , r2, c2;
        cin  >> r1 >> c1 >> r2 >> c2;
        // go and do stuff 
        // just query 
        cout<< result(matrix , r1, c1, r2, c2)<<endl;
    }

    return 0;
}