#include<iostream>
#include<vector>
#include"LinkedList.h"
using namespace std;

ListNode* reverse(ListNode* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    ListNode* prev = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return prev;
}

ListNode* reverseBetween(ListNode* head, int left, int right) {
    // need to handle the base case 
    // no element || only one element 
    if(head == NULL || head->next == NULL || left == right){
        return head;
    }

    // now we have to find the starting and ending point 
    ListNode* dummy = new ListNode();

    dummy->next = head;
    ListNode* revStart = dummy;
    ListNode* revEnd = dummy;

    // reach at the starting point 
    while(left >1){
        revStart = revStart->next;
        left --;
    }
    // reach at the ending point 
    while(right > 0){
        revEnd= revEnd->next;
        right --;
    }

    // now we are at the right position 
    // case 2 reverse at last 
    if(revEnd->next == NULL){
        cout<<"*";
        revStart->next= reverse(revStart->next);
    }
    else{
        // we have case 1 and case 2;
        ListNode* restList = revEnd->next;
        revEnd->next = NULL; // because we have to reverse 

        // new we have to reverse and attach 
        revStart->next= reverse(revStart->next);
        
        // now we have to link rest list 
        while( revStart ->next != NULL){
            revStart = revStart ->next;
        }
        // now link the rest
        revStart->next= restList;

    }
    return dummy->next;
}

// optimal solution 
// check the design gure 
ListNode* reverseBetween(ListNode* head, int left, int right) {
    // base case 
    if(head == NULL || head->next == NULL || left == right){
        return head;
    }

    // now i have to reach at left 
    ListNode*prev = NULL;
    ListNode* curr = head;
        // (neeed to travel till left -1)
    for(int i = 0; (curr != NULL && i < left - 1); i++){
        prev = curr;
        curr = curr->next;
    }
    // now i am at index left 
    // prev is pointing at left -1 
    // after reversal curr will be the at end 

    ListNode* listStartPrev = prev;
    ListNode * listEnd = curr;


    int i = 0;
    while( i < (right - left + 1) && curr != NULL){
        ListNode* temp = curr->next;
        curr->next= prev;
        prev = curr;
        curr = temp;
        i++;
    }
    // when left = 1
    if(listStartPrev == NULL){
        
        head = prev;
    }
    else{
        // link the first half with reversed ;
        listStartPrev->next = prev;
    }
    

    listEnd->next= curr;

    return head;
}


int main()
{
    return 0;
}