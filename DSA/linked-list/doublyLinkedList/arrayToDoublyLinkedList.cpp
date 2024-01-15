#include<iostream>
#include<vector>
#include"doublyLinkedList.h"
using namespace std;

ListNode* convertArrayToDoubly(vector<int>& arr){
    if(arr.size() == 0) return NULL;
    ListNode* head = new ListNode(arr[0]);
// need to maintain a previous 

    ListNode* prev = head;
    for(int i = 1; i<arr.size();i++){
        // create a new node 
        ListNode* newNode = new ListNode(arr[i] ,nullptr, prev);
        prev->next = newNode;
        prev = newNode;
    }
    return head;
}

void print(ListNode* head){
    ListNode* curr = head;
    while(curr != NULL){
        cout<<curr->data << " ";
        curr = curr->next;
    }
}

int main(){

    vector<int>arr = {1,2,3,4,5};
    ListNode* head = convertArrayToDoubly(arr);

    print(head);

    return 0;
}