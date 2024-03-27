class TreeNode{
    public :
    int val ;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
    TreeNode(int val , TreeNode* left , TreeNode* right){
        this->val = val;
        this->left = left;
        this->right = right;
    }

};