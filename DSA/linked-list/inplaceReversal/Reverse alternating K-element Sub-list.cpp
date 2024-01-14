#include<iostream>
#include<vector>
#include<LinkedList.h>
using namespace std;

/* 
Given the head of a LinkedList and a number ‘k’, reverse every alternating ‘k’ sized sub-list starting from the head.

If, in the end, you are left with a sub-list with less than ‘k’ elements, reverse it too.
 */

ListNode *reverse(ListNode *head, int k) {
    // TODO: Write your code here
    if(k <= 1 || head == nullptr || head->next == nullptr) {
      return head;
    }

    ListNode* curr = head;
    ListNode* prev = nullptr;

    while(curr != nullptr){
      ListNode* sublistPrevNode = prev;
      ListNode* sublistEndNode = curr;

      for(int i = 0; (i < k && curr != nullptr) ;i++){
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
      }
      // now link 
      if(sublistPrevNode == nullptr){
        head = prev;
      }
      else{
        sublistPrevNode->next = prev;
      }
      sublistEndNode->next = curr;

      // now skip the k node 
      for(int i = 0 ; (i < k && curr != nullptr); i++){
        prev = curr;
        curr = curr->next;
      }
    }
    return head;
  }
int main()
{
    return 0;
}