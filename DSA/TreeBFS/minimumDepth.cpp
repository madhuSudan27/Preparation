#include<iostream>
#include<vector>
#include"treeNode.h"
#include<queue>
using namespace std;

int minDepth(TreeNode* root){
    if(root == nullptr) return 0;
    int depth = 0;

    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        int length = q.size();
        depth ++;
        for(int index = 0; index < length ; index ++){
            TreeNode* top = q.front();
            q.pop();
            if(!top->left || ! top->right){
                return depth ;
            }

            if(top ->left ){
                q.push(top->left);
            }
            if(top->right){
                q.push(top->right);
            }
        }
    }
    return depth;
}

int main(){
    TreeNode* root = new TreeNode(0);
    root->left = new TreeNode(1);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->right ->right = new TreeNode(4);
    root->left->left->left = new TreeNode(5);

    cout<< minDepth(root);
    return 0;
}