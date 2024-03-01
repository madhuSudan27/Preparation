#include<iostream>
#include<vector>
using namespace std;

int solution(vector<int>& nums){
    int n = nums.size();
    int index = 0;
    while(index < n){
        if(nums[index] != index + 1 && nums[index] <= n){
            swap(nums[index], nums[nums[index] - 1]);
        }
        else{
            index ++;
        }
    }

    for(int i = 0; i < n; i++){
        if(nums[i] != i + 1){
            return i + 1;
        }
    }
    return n+1;
}
int main(){
    int n;
    cin >> n;
    vector<int>arr(n-1);

    for(int i  = 0 ; i < n - 1; i++ ){
        cin>> arr[i];
    }

    cout<< solution(arr);
    return 0;
}