#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &arr, int B) {
    
    int n = arr.size();
    
    int i = 0, j = 0, count = 0, ans = 0;
    while(i < n){
        if( arr[i] == 0) count ++;
        while(j < n && count > B){
            if(arr[j] == 0) count --;
            j++;
        }
        
        ans = max( ans, i-j+1);
        i++;
    }
    return ans;
    
}
int main()
{
    vector<int>arr={1,0};
    cout<<solve(arr,1);
    return 0;
}