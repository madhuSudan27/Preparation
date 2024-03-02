#include<iostream>
#include<vector>
using namespace std;

vector<int> buildPermutation(int n){
    vector<int>arr(n, 0);
    int index = 1;
    int val = n;
    while(index < n){
        arr[index] = val--;
        index += 2;
    }
    index = 0;
    while(index < n){
        arr[index] = val --;
        index += 2;
    }

    return arr;
}

bool checkDiff(vector<int>& arr){
    for(int index = 1; index < arr.size(); index ++){
        if(abs(arr[index] - arr[index -1]) == 1){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n ;
    cin >> n;

    vector<int>permutation = buildPermutation(n);
    bool check = checkDiff(permutation);
    if(check){
        for(auto it: permutation){
            cout<< it <<" ";
        }
    }
    else{
        cout<< "NO SOLUTION";
    }
    return 0;
}