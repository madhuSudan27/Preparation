#include<iostream>
#include<vector>
using namespace std;

// select first maximum so minimum swap 
int findMaxElement(vector<int>& arr){
    int maxIndex = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }
    }
    return maxIndex;
}
// try to choose last minimum  so have minimum swap 
int findMinElement(vector<int>& arr){
    int minIndex = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] <= arr[minIndex]){
            minIndex = i;
        }
    }
    return minIndex;
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int maxElementIndex= findMaxElement(arr);
    int minElementIndex= findMinElement(arr);
    // cout<<maxElementIndex <<" "<<minElementIndex<<endl;
    if(maxElementIndex > minElementIndex){
        cout<<((n-minElementIndex - 1) + maxElementIndex - 0) - 1;
    }
    else cout<<(n-minElementIndex - 1) + maxElementIndex - 0;
    return 0;
}