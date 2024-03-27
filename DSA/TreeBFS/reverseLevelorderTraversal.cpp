#include<iostream>
#include<vector>
#include"TreeNode.h"
#include<queue>
using namespace std;

void print(vector<vector<int>> arr){
    for(auto it: arr){
        for(auto i : it){
            cout<<i<<" ";
        }
        cout<< endl;
    }
}

vector<vector<int>>reverseLevelOrder(TreeNode* root){
    vector<vector<int>>ans;
    if(root == nullptr){
        return ans;
    }
    queue<TreeNode* >q;
    q.push(root);

    while(!q.empty()){
        int length = q.size();
        vector<int>temp;
        while(length > 0){
            TreeNode* curr = q.front();
            q.pop();
            temp.push_back(curr->val);
            if(curr->left){
                q.push(curr->left);
            }
            if(curr ->right){
                q.push(curr->right);
            }
            length --;

        }
        ans.insert(ans.begin() , temp);
    }
    return ans;

}


int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<vector<int>> ans = reverseLevelOrder(root );
    print(ans);
    return 0;
}