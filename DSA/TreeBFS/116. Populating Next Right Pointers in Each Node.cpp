#include<iostream>
#include<vector>
#include"Node.h"
using namespace std;

/* 
  Note :-   Tree is perfect (Balanced)
 */

Node* connect(Node* root) {
    if(root == NULL) return root;
    if(root->left){
        root->left->next = root->right;
    }
    if(root->right && root->next){
        root->right->next = root->next->left;
    }
    connect(root->left);
    connect(root->right);
    return root;
    
}
int main()
{
    return 0;
}