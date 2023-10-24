/* Given the root of a binary tree, return an array of the largest value in each row of the tree (0-indexed).

 

Example 1:


Input: root = [1,3,2,5,3,null,9]
Output: [1,3,9]
Example 2:

Input: root = [1,2,3]
Output: [1,3] */



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int depth(TreeNode* root){
        if(root==NULL) return 0;
        int left=depth(root->left);
        int right=depth(root->right);
        return max(left,right)+1;
    }
    
    void dfs(TreeNode* root,int depth,vector<int>&ans){
        if(root==NULL) return;
        ans[depth]=max(ans[depth],root->val);
        dfs(root->left,depth+1,ans);
        dfs(root->right,depth+1,ans);
    }

    vector<int> bfs(TreeNode* root){
        vector<int>ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int s=q.size();
            int maxi=INT_MIN;
            while(s--){
                TreeNode* curr=q.front();
                maxi=max(maxi,curr->val);
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            ans.push_back(maxi);
        }
        return ans;
    }


    void optimizedDfs(TreeNode* root, int height, vector<int>&ans){
        if(root==NULL) return;
        if(ans.size()<height){
            ans.push_back(root->val);
        }
        else if(ans.size()>=height){
            ans[height-1]=max(ans[height-1],root->val);
        }
        optimizedDfs(root->left,height+1,ans);
        optimizedDfs(root->right,height+1,ans);
    }

    vector<int> largestValues(TreeNode* root) {
        // int dept=depth(root);
        // vector<int>ans(dept,INT_MIN);
        // dfs(root,0,ans);
        // return ans;

        // we can solve using bfs in one pass 
        // return bfs(root);

        // optimized dfs
        vector<int>ans;
        optimizedDfs(root,1,ans);
        return ans;
        
    }
};