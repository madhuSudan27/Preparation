#include<iostream>
#include<vector>
#include"Node.h"
#include<queue>
using namespace std;

 Node* connect(Node* root) {
    if(! root || (root->left == NULL && root->right == NULL)){
        return root;
    }
    queue<Node* >q;
    q.push(root);
    Node* prev = NULL;
    while(! q.empty()){
        int length = q.size();
        for(int index = 0; index < length ; index++){
            Node* curr = q.front();
            q.pop();
            if(prev == NULL) prev = curr;
            else{
                prev->next = curr;
                prev = curr;
            }
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
    }
    return root;
    
}
int main()
{
    return 0;
}