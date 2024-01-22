#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int>nextSmallerElementToRight(vector<int>& arr){
        int n = arr.size();
        vector<int>ans(n);
        stack<int>st;

        for(int i = n - 1 ; i >= 0; i--){
            while(!st.empty() && arr[i] <= arr[st.top()]){
                st.pop();
            }
            if(st.empty()) ans[i] = n;
            else ans[i]  = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int>nextSmallerElementToLeft(vector<int>& arr){
        int n = arr.size();
        vector<int>ans(n);
        stack<int>st;

        for(int i = 0; i < n; i++){
            // if wel will use  while(!st.empty() && arr[i] < arr[st.top()])
            // then it will throw an error due to duplicassy 
            // dry run [71,55,82,55]
            // code will add last 55 for all left 4 subarray and 1 right subarray 
            
            while(!st.empty() && arr[i] < arr[st.top()]){
                st.pop();
            }
            if(st.empty()) ans[i] = -1;
            else ans[i]  = st.top();
            st.push(i);
        }
        return ans;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int mod = 1e9 + 7;

        int n = arr.size();
        int ans = 0; 
        vector<int>NSR = nextSmallerElementToRight(arr);
         vector<int>NSL = nextSmallerElementToLeft(arr);

        for(int i = 0; i< n; i++){
            int left =i - NSL[i];
            int right =NSR[i] - i;
            cout<<left<<" "<<right<<endl;
            ans = (ans + arr[i] * left* 1LL * right) % mod;
        }

        return ans;
    }

int main()
{
    return 0;
}