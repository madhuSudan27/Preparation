#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>&arr, int low, int high, int ele){

    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==ele) return mid;
        else if(arr[mid]>ele) high=mid-1;
        else low=mid+1;
    }
    return -1;
}

int main(){

    vector<int>arr={1,2,3,4,5,6,7};

    int n=arr.size();
    int index=search(arr,0,n-1,5);
    cout<<index;


    return 0;
}