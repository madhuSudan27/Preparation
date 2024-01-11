#include<iostream>
#include<vector>
#include "treeNode.h"
using namespace std;







 
void insert(TreeNode* root,vector<int>& helper){
    if(root==NULL) return ;

    if(root->left==NULL && root->right==NULL){
        helper.push_back(root->val);
    }

    insert(root->left,helper);
    insert(root->right,helper);
}

bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    vector<int>helper1;
    vector<int>helper2;
    insert(root1,helper1);
    insert(root2,helper2);
    // now just i have to check 
    return helper1==helper2;
    
}

int main()
{
    return 0;
}