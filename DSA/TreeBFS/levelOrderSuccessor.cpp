#include<iostream>
#include<vector>
#include<queue>
#include "TreeNode.h"
using namespace std;

TreeNode* successor(TreeNode* root , int key){
    if(root == nullptr){
        return nullptr;
    }
    queue<TreeNode*>q;
    q.push(root);
    bool seen = 0;
    while(! q.empty()){
        int length = q.size();
        for(int index = 0; index < length ; index ++){
            TreeNode* top = q.front();
            q.pop();
            if(seen) return top;
            if(top->val == key){
                seen = 1;
            }
            if(top->left){
                q.push(top->left);
            }
            if(top ->right){
                q.push(top->right);
            }
        }
    }
    return nullptr;

}

int main(){
    TreeNode* root = new TreeNode(0);
    root->left = new TreeNode(1);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left ->right = new TreeNode(4);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);
    TreeNode* ans = successor(root, 6);
    if(ans == nullptr) cout<<"enjoy coding";
    else cout<< ans->val;
    return 0;
}