#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n=temperatures.size();
    vector<int>ans(n,0);
    // solution O(n^2) <- run two for loop and traverse on that 
    // optimized solution

    stack<pair<int,int>>s;
    for(int i=n-1;i>=0;i--){
        while(s.size()>0 && temperatures[i]>=s.top().first){
            s.pop();
        }
        
        if(!s.empty()){
            ans[i]=s.top().second-i;  
        }
        s.push({temperatures[i],i});

    }
    return ans;

    
}

int main()
{
    return 0;
}