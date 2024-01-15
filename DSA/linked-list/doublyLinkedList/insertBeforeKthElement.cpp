#include<iostream>
#include<vector>
#include"doublyLinkedList.h"
using namespace std;


// array to linked list 
ListNode* arrayToList(vector<int>&arr){
    int n = arr.size();
    if(n == 0){
        return nullptr;
    }
    ListNode* head = new ListNode(arr[0]);

    ListNode* prev = head;

    for(int i = 1; i<n ;i++){
        ListNode* newNode = new ListNode(arr[i] ,nullptr,prev);
        prev->next = newNode;
        prev = newNode;
    }
    return head;
}

ListNode* insertAtHead(ListNode* head , int val){

    ListNode* newHead = new ListNode(val ,head,nullptr);
    head->back = newHead;
    return newHead;
}

// insert at tail 
ListNode* insertAtTail(ListNode* head, int val){
    if(head->next ==nullptr){
        return (insertAtHead(head , val));
    }
    ListNode* tail = head;
    while(tail->next != nullptr){
        tail = tail->next;
    }

    ListNode* prev = tail->back;
    ListNode* newNode = new ListNode(val,tail , prev);
    newNode->next = tail;
    newNode->back = prev;

    return head;
}

ListNode* insertNode(ListNode* head, int k, int val){
    if(k == 0){
        cout<<"Not allowed"<<endl;
        return head;
    }
    if(k == 1){
        return insertAtHead(head, val);
    }

    int count = 0;
    ListNode* curr = head;

    while(curr != nullptr){
        count ++;
        if(count == k){
            break;
        }
        curr = curr->next;
    }
    // check does exceeded limit 
    if(curr == NULL){
        cout<<"Out of Bound"<<endl;
        return head;
    }
    ListNode* prev = curr->back;
    ListNode* newNode = new ListNode(val, curr, prev);

    prev->next = newNode;
    curr->back = newNode;

    return head;
}

void print(ListNode* head){
    ListNode* curr = head;
    while(curr != nullptr){
        cout<<curr->data;
        if(curr->next != nullptr){
            cout<<" <-> ";
        }
        curr = curr->next;
    }
    cout<<endl;
}


int main(){
    vector<int>arr= {1,2,3};
    ListNode* head = arrayToList(arr);
    cout<<"Linked List"<<endl;
    print(head);
    // 
    cout<<"inserting kth node.... "<<endl;
    ListNode* newHead = insertNode(head ,2,10);
    cout<<"After insertion our List:- "<<endl;
    print(newHead);

    return 0;
}