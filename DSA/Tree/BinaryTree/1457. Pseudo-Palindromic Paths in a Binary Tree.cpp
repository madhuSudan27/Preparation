#include<iostream>
#include<vector>
#include "traffic.h"
using namespace std;

void solution(TreeNode* root, int digit, int &ans){
    if(root==NULL) return;

    digit = digit ^ (1 << root->val);
    if(root->left == nullptr && root->right == nullptr){
        if((digit & (digit - 1)) == 0){
            ans += 1;
        }
        return ;
    }
    
    helper(root->left,digit,ans);
    helper(root->right,digit,ans);
}
int pseudoPalindromicPaths (TreeNode* root) {
    // generate all the root to node path 
    int ans=0;
    solution(root,0,ans);
    return ans;
}

int main()
{
    return 0;
}