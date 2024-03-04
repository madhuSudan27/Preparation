#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int numSubmatrixSumTarget(vector<vector<int>>& A, int target) {
    int res = 0, m = A.size(), n = A[0].size();
    for (int i = 0; i < m; i++)
        for (int j = 1; j < n; j++)
            A[i][j] += A[i][j - 1];
    unordered_map<int, int> counter;
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            counter = {{0,1}};
            int cur = 0;
            for (int k = 0; k < m; k++) {
                cur += A[k][j] - (i > 0 ? A[k][i - 1] : 0);
                res += counter.find(cur - target) != counter.end() ? counter[cur - target] : 0;
                counter[cur]++;
            }
        }
    }
    return res;
}

int numSubmatrixSumTargetOptimized(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();
    int ans = 0;

    // vector< vector<int>> prefixMatrix = buildPrefix(matrix, n,m);

    // now i can work on prefix matrix 
    // int ans = subMatrix(matrix, n, m, target);

    for(int row = 0; row < n; row ++){
        for(int col = 1; col < m; col ++){
            matrix[row][col] = matrix[row][col - 1] + matrix[row][col];
        }
    }
    // now i have prefix matrix 

    for(int colStart = 0; colStart < m; colStart ++){
        for(int colEnd = colStart ; colEnd < m ; colEnd ++){
            int sum = 0;
            unordered_map<int,int>mp;
            mp[0] = 1;
            for(int rowStart = 0; rowStart < n ; rowStart ++){
                sum += matrix[rowStart][colEnd] - (colStart > 0 ? matrix[rowStart][colStart - 1] : 0);
                // cout<<sum <<" ";
                ans += (mp.find(sum - target) != mp.end() ? mp[sum - target] : 0);
                mp[sum] ++;
            }
            
        }
    }


    return ans;
    
}
int main()
{
    return 0;
}