#include<iostream>
#include"LinkedList.h"
#include<vector>
using namespace std;

/* Given the head of a LinkedList and a number ‘k’, reverse every ‘k’ sized sub-list starting from the head.

If, in the end, you are left with a sub-list with less than ‘k’ elements, reverse it too.
 */

ListNode *reverse(ListNode *head, int k) {
    // TODO: Write your code here
    // corner case 
    if(head == nullptr || head->next == nullptr || k<= 1) {
      return head;
    }

    ListNode* curr = head;
    ListNode* prev = nullptr;
    while(curr){

      ListNode* sublistPrevNode = prev ;
      ListNode* sublistLastNode = curr;

      // lets reverse k element 
      for(int i = 0;  (i<k && curr != nullptr); i++){
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
      } 

      // now we need to link 
      if(sublistPrevNode == nullptr){
        head = prev;
      }
      else{
        sublistPrevNode->next = prev;
      }

      // link the end node 
      sublistLastNode->next = curr;

      // we need to also update prev 
      prev = sublistLastNode;
    }

    return head;
  }
int main()
{
    return 0;
}