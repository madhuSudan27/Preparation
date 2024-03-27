#include<iostream>
#include<vector>
#include"TreeNode.h"
#include<queue>
using namespace std;

 vector<vector<int>> levelOrder(TreeNode* root) {
        vector< vector<int> >ans;
        if(root == nullptr) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int s = q.size();
            vector<int>temp;
            while(s){
                TreeNode* top = q.front();
                q.pop();
                temp.push_back(top->val);
                if(top->left){
                    q.push(top->left);
                }
                if(top->right){
                    q.push(top->right);
                }
                s --;
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }

int main(){

    return 0;
}