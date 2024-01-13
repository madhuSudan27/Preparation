#include<iostream>
#include<vector>
#include"LinkedList.h"
using namespace std;

ListNode* reverseList(ListNode* head) {
    if(!head || !head->next) return head;
    ListNode* Node=reverseList(head->next);
    head->next->next=head;
    head->next=NULL;
    return Node;
}

ListNode *reverse(ListNode *head) {
ListNode *result = head;
// TODO: Write your code here
ListNode *prev= nullptr;
ListNode *curr= head;
while(curr != nullptr){
    ListNode *temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
}
return prev;

}
int main()
{
    return 0;
}