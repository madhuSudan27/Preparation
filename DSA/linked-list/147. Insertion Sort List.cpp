#include<iostream>
#include<vector>
#include"LinkedList.h"
using namespace std;

ListNode* insertionSortList(ListNode* head) {

    ListNode* curr = head;
    ListNode* dummy= new ListNode(0);
    ListNode* prev = dummy;

    while(curr != nullptr){
        ListNode* nextNode = curr->next;
        // skip elements less than curr->val
        while(prev->next != nullptr && prev->next->val < curr->val){
            prev = prev->next;
        }
        curr->next = prev->next;
        prev->next = curr;
        prev = dummy;
        curr = nextNode;
    }
    return dummy->next;
}


int main()
{
    return 0;
}