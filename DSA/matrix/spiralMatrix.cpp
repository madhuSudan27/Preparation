#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>&mat){
    vector<int>ans;

    int rowStart = 0, rowEnd= mat.size() -1;
    int colStart = 0, colEnd= mat[0].size()-1;

    while(rowStart <= rowEnd && colStart <= colEnd ){

        for(int i = colStart ;i <= colEnd ;i++){
            ans.push_back(mat[rowStart][i]);
        }
        rowStart ++;
        for(int i = rowStart ; i <= rowEnd ;i++){
            ans.push_back(mat[i][colEnd]);
        }
        colEnd --;

        if(rowStart <= rowEnd){
            for(int i = colEnd ;i >= colStart; i--){
                ans.push_back(mat[rowEnd][i]);
            }
            rowEnd --;
        }

        if(colStart <= colEnd){
            for(int i = rowEnd ;i >= rowStart ;i-- ){
                ans.push_back(mat[i][colStart]);
            }
        }
        colStart ++;
    }
    return ans;

}

int main(){

    int row, col ;
    cout<<"enter row and col"<<endl;
    cin>> row >> col;

    vector<vector<int>> mat(row, vector<int>(col));
    cout<<"*"<<endl;
    for(int i = 0; i< row ;i++){
        for(int j = 0; j< col ; j++ ){
            cin>> mat[i][j];
        }
    }

    vector<int>ans = spiralOrder(mat);

    for(auto it: ans){
        cout<< it<<" ";
    }


    return 0;
}