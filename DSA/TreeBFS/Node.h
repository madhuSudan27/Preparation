class Node{
    public:
    int val ;
    Node* left ;
    Node* right;
    Node* next;

    Node(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
        this->next = nullptr;
    }
    
};