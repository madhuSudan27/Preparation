#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int solution(vector<int>& arr , int student){
    int index = 0;
    int m = arr.size();
    sort(arr.begin(), arr.end());
    int ans = INT_MAX;
    for(; index <= m - student ; index ++){
        ans = min(ans , arr[index + student - 1] -  arr[index]);
    }

    return ans ;    
}

int main(){
    int n , m;
    cin >> n >> m;
    vector<int>arr(m);
    for(int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    cout<<solution(arr , n)<<endl;

    return 0;
}