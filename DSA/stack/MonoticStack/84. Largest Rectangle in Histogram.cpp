#include<iostream>
#include<vector>
#include<stack>
using namespace std;

/* Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

 

Example 1:


Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units. */


vector<int>findRightSmallerIndex(vector<int>& heights){
        int n = heights.size();
        vector<int>ans(n);
        stack<pair<int,int>>st;

        for(int i = n-1 ; i>= 0; i--){
            while(!st.empty() && st.top().first >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i] = n;
            }
            else{
                ans[i] = st.top().second;
            }
            st.push({heights[i], i});
        }
        return ans;
    }

    vector<int>findLeftSmallerIndex(vector<int>& heights){
        int n = heights.size();
        vector<int>ans(n);
        stack<pair<int,int>>st;

        for(int i = 0; i< n; i++){
            while(!st.empty() && st.top().first >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i] = -1;
            }
            else{
                ans[i] = st.top().second;
            }
            st.push({heights[i], i});
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        // the concept is to find next greater element in the right side and left side
        // then build the ans 
        // next Greater element on right side 
        int n = heights.size();
        vector<int>rightSmaller= findRightSmallerIndex(heights);
        vector<int>leftSmaller = findLeftSmallerIndex(heights);
        int ans = 0;
        for(int i = 0; i< n; i++){
            int length =(rightSmaller[i] - leftSmaller[i] ) - 1;
            ans = max(ans , heights[i]* length);
        }

        return ans;


    }
int main()
{
    return 0;
}