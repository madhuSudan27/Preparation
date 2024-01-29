#include<iostream>
#include<vector>
#include<stack>
using namespace std;


 string removeDuplicates(string s, int k) {
    stack<pair<int,int>>st;
    for(auto it: s){
        if(!st.empty() && st.top().first == it){
            st.top().second += 1;
            // if k adjacent elements then pop  
            if(st.top().second == k){
                st.pop();
            }

        }
        else{
            st.push({it , 1});
        }
    }
    string ans = "";
    while(!st.empty()){
        int count = st.top().second;
        while(count --){
            ans.push_back(st.top().first);
        }
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    return 0;
}