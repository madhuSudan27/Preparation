#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// idea is to remove the digit greedily 
// if(nums[i] > nums[i+1]) then remove
/* 
// base case 
    case 1 when all the digits are is_same  
    case 2 when only last digit is the greatest one 
            like 123  ans k = 1;

            
 */
string removeKdigits(string num, int k) {
    if(num == "0") return num;
    int n = num.size();
    if(k == n) return "0";
    stack<char>st;
    for(auto it: num){
        while((!st.empty() && k != 0)  && st.top() > it){
            st.pop();
            k --;
        }
        st.push(it);
    }
    while(k--)  st.pop();

    string temp = "";
    while(!st.empty()){
        temp.push_back(st.top());
        st.pop();
    }
    reverse(temp.begin(), temp.end());
    // remove leading zero 
    string ans = "";
    bool check = 1;
    for(auto it: temp){
        if(it > '0') check = 0;
        if(!check){
            ans.push_back(it);
        }
    }
    return ans == "" ? "0" :ans;
}

int main()
{
    return 0;
}