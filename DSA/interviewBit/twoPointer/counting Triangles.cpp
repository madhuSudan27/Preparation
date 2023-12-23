#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Triang(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size(), ans = 0;
    int mod = 1e9 + 7;
    for( int i=2; i<n; i++){
        int j = 0, k= i-1;
        while( j < k){
            int sum = arr[j] + arr[k];
            if( sum > arr[i]){
                ans = (ans + k - j)% mod;
                k --;
            }
            else j ++;
        } 
    }
    return ans % mod;
}

int main()
{
    return 0;
}