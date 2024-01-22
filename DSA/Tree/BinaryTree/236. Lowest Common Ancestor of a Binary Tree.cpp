#include<iostream>
#include<vector>
#include "treeNode.h"
using namespace std;

 TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

    if(root == nullptr){
        return nullptr;
    }
    if(p == root || q == root){
        return root;
    }
    
    TreeNode* rootLeft = lowestCommonAncestor(root->left,p, q);
    TreeNode* rootRight = lowestCommonAncestor(root->right,p, q);
    if(rootLeft && rootRight){
        return root;
    }
    else{
        return rootLeft != nullptr ? rootLeft : rootRight;
    }
}
int main()
{
    return 0;
}