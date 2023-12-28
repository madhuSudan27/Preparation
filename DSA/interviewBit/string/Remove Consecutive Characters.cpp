#include<iostream>
#include<vector>
#include<string>
using namespace std;

string solve(string A, int B) {
    
    string ans = "";
    
    int start = 0;
    int n = A.size();
    while( start < n){
        char prev = A[start];
        int count = 0;
        string subString = "";
        
        while(start < n && A[start] == prev){
            count++;
            start++;
            subString.push_back(prev);
        }
        
        if( count != B){
            ans += subString;
        }
        
    
    }
    return ans;
}



int main()
{
    return 0;
}