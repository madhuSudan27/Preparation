#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int solution(vector<int>& arr){
    int n = arr.size();
    unordered_map<int,int>mp;
    int ans = -1;
    for(int index = 0; index < n; index ++){
        mp[arr[index]] ++;
    }

    for(auto it : arr){
        if(mp[it] == 1){
            ans = max(ans , it);
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int>arr(n);

    for(int index = 0; index <n; index ++){
        cin>> arr[index];
    }

    cout<< solution(arr);

    return 0;
}
