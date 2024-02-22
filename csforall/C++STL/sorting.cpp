#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(pair<int,int> a, pair<int,int>b){
    // sort based on second element 
    // if second element is same the sort it based on first in descending order 
    if(a.second < b.second) return true;
    if(a.second == b.second && a.first > b.first) return true;
    return false;
}

int main()
{

    pair<int,int>arr[] = {{1,2},{2,1},{4,1}};
    int n = sizeof(arr)/ sizeof(int);
    // cout<<n;
    sort(arr, arr + 3, comp);
    for(auto it: arr){
        cout<<it.first <<" "<<it.second<<endl;
    }

    int n1 = 11;
    int setBit =__builtin_popcount(n1);
    cout<<setBit;

    long long num = 111111;
    int llSetBit = __builtin_popcountll(num);
    cout<<llSetBit;
    return 0;
}