#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &arr, int B) {
    int ans = 0 , n= arr.size();
    int i = 0,j = 0,runningSum = 0;
    while(j < n){
        runningSum += arr[j];
        while(i < n && runningSum >= B){
            runningSum -= arr[i];
            i++;
        }
        ans+= (j - i) + 1;
        j++;
    }
    return ans;
}

int main()
{
    return 0;
}