#include<iostream>
#include<vector>
using namespace std;
bool isEquilibrium(vector<vector<int>>& arr){
    int n = arr.size();
    int x = 0, y = 0, z = 0;
    for(int i = 0; i < n; i ++){
        x += arr[i][0];
        y += arr[i][1];
        z += arr[i][2];
    }
    return (x == 0 && y == 0 &&  z == 0);
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n , vector<int>(3));

    for(int i = 0; i<n ;i ++){
        for(int j = 0 ; j < 3 ; j++){
            cin>> arr[i][j];
        }
    }
    // now i have to check
    bool result = isEquilibrium(arr); 
   if(result){
    cout<< "YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
    return 0;
}