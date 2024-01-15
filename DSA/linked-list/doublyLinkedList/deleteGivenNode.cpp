#include<iostream>
#include<vector>
#include"doublyLinkedList.h"
using namespace std;

ListNode* arrayToList(vector<int>&arr){
    int n = arr.size();
    if(n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);

    ListNode* prev = head;
    for(int i = 1; i<n ;i++){
        ListNode* newNode= new ListNode(arr[i]);
        newNode->back = prev;
        prev->next = newNode;
        prev = newNode;
    }

    return head;
}

ListNode* deleteHead(ListNode* head){
    if(head == nullptr || head->next == nullptr){
        return nullptr;
    }

    ListNode* prev = head;
    head = head->next;

    prev->next= nullptr;
    head->back = nullptr;

    delete prev; 
    return head; 
}
ListNode* deleteTail(ListNode* head){
    if(head == nullptr || head->next == nullptr){
        return nullptr;
    }
    ListNode* tail = head;
    
    while(tail->next != nullptr){
        tail = tail->next;
    }
    ListNode* newTail =  tail->back;
    newTail->next= nullptr;
    tail->back = nullptr;

    delete tail; 
    return head; 
}

ListNode* deleteNode(ListNode* head , int val){
    // corner case  
    if(head == nullptr || (head->next == nullptr && head->data == val)){
        return nullptr;
    }

    // now need to traverse till that index 
    ListNode* curr = head;
    while(curr != nullptr){
        if(curr->data == val){
            break;
        }
        curr = curr->next ;
    }
    // when val is not present 
    if(curr == nullptr){
        return head;
    }

    ListNode* currPrev = curr->back;
    ListNode* currNext = curr->next;

    // case 1
    if(currNext == nullptr && currPrev == nullptr){
        return nullptr;
    }
    // case 2
    if(currNext == nullptr){
        return (deleteTail(head));
    }
    // case 3
    if(currPrev == nullptr){
        return (deleteHead(head));
    }

    // case 4 
    currNext->back = currPrev;
    currPrev->next = currNext;

    curr->next = nullptr;
    curr->back = nullptr;
    delete curr;

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
    vector<int>arr= {1,2,3,4,5,6,7,8,9};
    ListNode* head = arrayToList(arr);
    cout<<"Initial List "<<endl;
    print(head);
    cout<<"After deletion new List:- ";
    ListNode* newHead = deleteNode(head, 5);
    print(newHead);


    return 0;
}