#include<iostream>
#include<vector>
#include<stack>
using namespace std;

/* Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area. */
 vector<int>nextSmallerToRight(vector<int>height){
    int n = height.size();
    vector<int>ans(n);
    stack<pair<int, int>>st;

    for(int i = n-1; i>= 0; i--){
        while(!st.empty() && st.top().first >= height[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = n;
        }
        else{
            ans[i] = st.top().second;
        }
        st.push({height[i] , i});
    }
    return ans;
}

vector<int>nextSmallerToLeft(vector<int>height){
    int n = height.size();
    vector<int>ans(n);
    stack<pair<int, int>>st;

    for(int i = 0; i < n; i++){
        while(!st.empty() && st.top().first >= height[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = st.top().second;
        }
        st.push({height[i] , i});
    }
    return ans;
}

int maximumRectangleInHistogram(vector<int>& height){
    int n  = height.size();
    vector<int>NSR = nextSmallerToRight(height);
    vector<int>NSL = nextSmallerToLeft(height);

    int area = 0;

    for(int i = 0 ;i<  n; i ++){
        int breadth = (NSR[i] - NSL[i]) - 1;
        area = max(area , height[i] * breadth);
    }
    return area;
}
int maximalRectangle(vector<vector<char>>& matrix) {
    
    int n = matrix.size();
    int m = matrix[0].size();

    // i will form and height array for histogram 
    vector<int>height(m);

    // now we need to form and call the function 
    int maximalRectangle = 0 ;
    for(int i = 0; i< n; i++){
        for(int j = 0 ;j < m; j ++){
            if(matrix[i][j] == '1'){
                height[j] += 1;
            }
            else{
                height[j] = 0;
            }
        }
        maximalRectangle = max(maximalRectangle,maximumRectangleInHistogram(height));
    }
    return maximalRectangle;
}
int main()
{
    return 0;
}