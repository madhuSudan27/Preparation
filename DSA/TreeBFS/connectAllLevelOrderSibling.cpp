#include<iostream>
#include<vector>
#include <queue>
using namespace std;

class TreeNode {
public:
  int val = 0;
  TreeNode *left;
  TreeNode *right;
  TreeNode *next;

  TreeNode(int x) {
    val = x;
    left = right = next = nullptr;
  }

};

TreeNode* connect(TreeNode* root){
    if(root == nullptr){
        return root;
    }
    queue<TreeNode*>q;
    q.push(root);
    while(! q.empty()){
        int length = q.size();
        TreeNode* prev = nullptr;
        // TreeNode* last = nullptr;
        for(int index = 0; index < length; index ++){
            TreeNode* curr = q.front();
            q.pop();

            if(prev == nullptr) prev = curr;
            else {
                prev->next = curr;
                curr = prev;
            }
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        prev ->next = nullptr;
    }
    return root;

}

int main(){

    return 0;
}