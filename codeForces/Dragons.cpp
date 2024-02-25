#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool solution(int strength , vector<pair<int,int>>& arr){
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for(int i = 0; i< n; i ++){
        if(arr[i].first >= strength){
            return 0;
        }
        else{
            strength += arr[i].second;
        }
    }

    return 1;
}

int main(){
    int s;
    cin >> s;
    int n;
    cin >> n;

    vector< pair<int,int> >arr;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        arr.push_back({a,b});
    } 
    
    bool check = solution(s,arr);

    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}