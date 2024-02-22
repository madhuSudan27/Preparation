#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(vector<int>& arr){
    int count = 0;
    // i have take coins such in a way so i will get more money than my sibling 
    int sum = 0;
    for(auto it: arr){ 
        sum += it;
    }
    sort(arr.begin(), arr.end());
    int index = arr.size() -1 , currSum = 0;
    while( index >= 0 && currSum <= sum){
        count ++;
        sum -= arr[index];
        currSum += arr[index];
        index --;
    }
    return count;
}

int main(){

    int n;
    cin>> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<solution(arr)<<endl;
    return 0;
}