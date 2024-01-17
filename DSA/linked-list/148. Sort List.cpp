#include<iostream>
#include<vector>
#include "LinkedList.h"
using namespace std;

// approach 1 -> we can use set or map to store the node value 
    // then form the entire new list 

// approach 2
    // sort using merge sort
ListNode* findMid(ListNode* head){
    if(head == nullptr){
        return head;
    }
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast->next != nullptr && fast->next->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode* merge(ListNode* left , ListNode* right){
    if(left == nullptr){
        return right;
    }
    if(right == nullptr) return left;
    ListNode* dummy = new ListNode(-1);
    ListNode* ans = dummy;

    while(left != nullptr && right != nullptr){
        if(left->val < right->val){
            dummy->next = left;
            dummy = left;
            left = left->next;
        }
        else{
            dummy->next = right;
            dummy = right ;
            right = right->next;
        }
    }
    if(left == nullptr){
        dummy->next = right;
    }
    else if(right == nullptr){
        dummy->next = left;
    }
    return ans->next;
}

ListNode* sortList(ListNode* head) {
    if(head == nullptr || head->next == nullptr){
        return head;
    }

    ListNode* mid = findMid(head);
    ListNode* midNext = mid->next;
    mid->next = nullptr;

    ListNode* left = sortList(head);
    ListNode* right = sortList(midNext);
    ListNode* merged = merge(left, right);
    return merged;  
}

int main()
{
    return 0;
}