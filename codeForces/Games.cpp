#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    vector<int>home(n);
    vector<int>guest(n);
    for(int i = 0 ;i< n; i++){
        cin>>home[i];
        cin>> guest[i];
    }
    int ans = 0;
    for(int i = 0 ;i< n; i++){
        for(int j = 0 ; j < n; j ++){
            if(home[i] == guest[j]) ans ++;
        }
    }
    cout<< ans <<endl;
    return 0;
}