#include<iostream>
#include<vector>
using namespace std;

int solution(vector<int>&arr){
    int index=0,n=arr.size(),j=1;
    while(j<n){
        if(arr[index]!=arr[j]){
            arr[++index]=arr[j];
        }
        j++;
    }
    return index+1;
    
}

int main(){
    vector<int>arr={2,3,3,3,6,9,9};
    int ans=solution(arr);
    cout<<ans;
    return 0;
}

