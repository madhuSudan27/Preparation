#include<iostream>
#include<vector>
#include<unordered_map>
#include<stack>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
        // TODO: Write your code here
    stack<int>st;
    unordered_map<int,int>mp;

    for(auto ele : nums2){
        while(!st.empty() && st.top() < ele){
            mp[st.top()] = ele;
            st.pop();
        }
        st.push(ele);
    }

    for(auto it: nums1){
        if(mp.find(it)!= mp.end()){
            ans.push_back(mp[it]);
        }
        else{
            ans.push_back(-1);
        }
    }

    return ans;
}

int main()
{
    return 0;
}