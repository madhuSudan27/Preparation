#include<iostream>
#include<vector>
#include "treeNode.h"
using namespace std;
/* 
Given the root of a binary tree, find the maximum value v for which there exist different nodes a and b where v = |a.val - b.val| and a is an ancestor of b.

A node a is an ancestor of b if either: any child of a is equal to b or any child of a is an ancestor of b.
 */

void solution(TreeNode* root, int mini, int maxi , int & ans){
        if(root == NULL) return ;
        mini = min(mini , root->val);
        maxi = max(maxi, root->val);
        ans = max(ans, abs(mini - maxi));
        solution(root->left,mini, maxi, ans);
        solution(root->right, mini, maxi, ans);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root == NULL) return 0;

        int ans = 0;
        // keep track of minimum and maximum 
        solution(root, root->val, root->val, ans);
        return ans;
        
    }
int main()
{
    return 0;
}