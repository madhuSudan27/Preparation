#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> prefixSumMatrix(vector< vector<int> >& arr, int row, int col){
    // first row;
    vector<vector<int>> cumArray(row, vector<int>(col, 0));
    cumArray[0][0] = arr[0][0];
    // first row;
    for(int colIndex= 1; colIndex < col ; colIndex ++){
        cumArray[0][colIndex] = cumArray[0][colIndex - 1] + arr[0][colIndex];
    }
    // first col
    for(int rowIndex = 1; rowIndex < row; rowIndex ++){
        cumArray[rowIndex][0] = cumArray[rowIndex - 1][0] + arr[rowIndex][0];
    }

    for(int rowIndex = 1; rowIndex < row; rowIndex ++){
        for(int colIndex = 1; colIndex < col; colIndex ++){
            cumArray[rowIndex][colIndex] = cumArray[rowIndex][colIndex - 1] + 
            cumArray[rowIndex - 1][colIndex] + arr[rowIndex][colIndex] - cumArray[rowIndex - 1][colIndex -1];
        }
    }
    
    return cumArray;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector< vector<int> >arr(n, vector<int>(m,0));

    for(int rowIndex = 0; rowIndex < n; rowIndex ++){
        for(int colIndex = 0; colIndex < m ; colIndex ++){
            cin >> arr[rowIndex][colIndex]; 
        }
    }

    for(int rowIndex = 0; rowIndex < n; rowIndex ++){
        for(int colIndex = 0; colIndex < m ; colIndex ++){
            cout << arr[rowIndex][colIndex] << " "; 
        }
        cout<< endl;
    }
    
    vector<vector<int>> cumArray = prefixSumMatrix(arr , n, m);
    for(int rowIndex = 0; rowIndex < n; rowIndex ++){
        for(int colIndex = 0; colIndex < m ; colIndex ++){
            cout<< cumArray[rowIndex][colIndex] << " "; 
        }
        cout<< endl;
    }

    return 0;
}