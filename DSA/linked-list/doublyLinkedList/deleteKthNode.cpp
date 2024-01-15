#include<iostream>
#include<vector>
#include"doublyLinkedList.h"
using namespace std;

ListNode* arrayToList(vector<int>& arr){
    if(arr.size() == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* prev = head;
    for(int i = 1; i<arr.size() ;i++){

        ListNode* newNode = new ListNode(arr[i] , nullptr , prev);
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
    prev->next = nullptr;
    head->back = nullptr;

    delete prev;
    return head; 
}

ListNode* deleteTail(ListNode* head){
    // bae case 
    if(head == nullptr || head->next == nullptr){
        return nullptr;
    }

    ListNode* curr = head;
    while(curr->next != nullptr){
        curr = curr->next;
    }

    ListNode* newTail = curr->back;
    curr->back = nullptr;
    newTail->next = nullptr;

    delete curr;
    return head;
}

ListNode* deleteNode(ListNode* head , int k ){

    // corner case 
    if(head == nullptr || k == 0) return head;
    // now we have to delete
    ListNode* curr = head;
    int count = 0;
    while (curr != nullptr){
        /* code */
        count ++;
        if(count == k){ // break at exact write node 
            break;
        }
        curr = curr->next;
    }

    // check 
    if(curr->next == nullptr && curr->back == nullptr){
        delete curr;
        return nullptr;
    }
    // check for delete head case 
    if(curr->back == nullptr){
        return(deleteHead(head));
    }
    // delete tail condition 
    if(curr ->next == nullptr){
        return(deleteTail(head));
    }

    // otherwise delete manually 
    ListNode* prevNode = curr->back;
    ListNode* nextNode = curr->next;

    // link 
    prevNode->next = nextNode;
    nextNode->back = prevNode;

    // delete 
    curr->back = nullptr;
    curr->next = nullptr;
    
    return head;
}

void print(ListNode* head){
    ListNode* curr = head;
    while(curr != nullptr){
        cout<<curr->data;
        if(curr->next) cout<<"<->";
        curr = curr->next;
    }
    cout<<endl;
}

int main(){

    vector<int>arr= {1,2};
    ListNode* head = arrayToList(arr);
    cout<<"Linked List"<<endl;
    print(head);
    // 
    cout<<"deleting the kth node.... "<<endl;
    ListNode* newHead = deleteNode(head , 1);
    cout<<"After deletion our List:- "<<endl;
    print(newHead);

    return 0;
}