#include<iostream>
#include<vector>
using namespace std;

int Solution(vector<int> &arr, int B) {
    // given array is sorted so 
    // can go with two pointer 
    
    int n = arr.size();
    
    // for zero case check 
    if( B == 0){
        for( int i=1 ;i< n;i++){
            if( arr[i] == arr[i - 1]) return 1;
        }
        return 0;
    }
    
    int start = 0;
    int end = 1;
    while(start < n && end < n){
        int diff = arr[end] - arr[start];
        if( diff == B) return 1;
        else if ( diff > B){
            start ++;
        }
        else end ++;
    } 
    return 0;
}

int main()
{
    return 0;
}