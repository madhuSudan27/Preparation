#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

// try to solve using hash map 

Node* copyRandomList(Node* head) {
        if(head == nullptr) return nullptr;
        Node* curr = head;

        while(curr != nullptr){
            Node* currNext = curr->next;
            Node* newNode = new Node(curr->val);
            newNode->next = currNext;
            curr->next = newNode;
            curr = currNext;
        }

        // now i need to link Next random pointer

        curr = head;
        while(curr){
            if(curr->random){
                curr->next->random = curr->random->next;
            }
            else{
                curr->next->random = nullptr;
            }
            curr = curr->next->next;
        } 

        Node* newHead = head->next;
        curr = head;
        while(curr){
            Node* currNext = curr->next;
            curr->next = currNext->next;
            curr = curr->next;

            if(curr){
                currNext->next = curr->next;
            }
            else{
                currNext->next = nullptr;
            }
        }
        return newHead;

    }

int main()
{
    return 0;
}