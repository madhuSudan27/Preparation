#include<iostream>
#include<vector>
#include"LinkedList.h"
using namespace std;

// Given the head of a linked list, rotate the list to the right by k places.


    int findLength(ListNode* head , int count ){
        if(head == nullptr){
            return count;
        }

        return findLength(head->next , count +1);
    } 

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || k == 0 || head->next == nullptr){
            return head;
        }
        // first thing is to find the length of linked list 
        int listSize= findLength(head , 0);

        int rotate =  k % listSize ;
        if(rotate == 0) return head;
        ListNode* curr = head;

        for(int i = 0; i<(listSize - rotate -1) ; i++){
            curr = curr->next;
        }
        ListNode* tail = curr;
        
        ListNode* newHead = curr->next;
        while(curr->next != nullptr){
            curr= curr->next;
        }
        curr->next = head;
        tail->next = nullptr;

        return newHead;
        
    }
int main()
{
    return 0;
}