#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n ; 
    cin>> n;
    vector< int > arr(n,0);
    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }

    vector<int> prefix(n, 0);
    prefix[0] = arr[0];

    for(int index = 1; index < n; index ++){
        prefix[index] = prefix[index - 1] + arr[index];
    }

    int q;
    cin >> q;
    while( q --){
        int start , int end;
        cin>> start >> end;
        if(start == 0){
            cout<< prefix[end]<<endl;
        }
        else {
            cout<< prefix[end] - prefix[start -1] <<endl;
        }
    }

    return 0;
}