#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int length(ListNode* head){
        int count = 0;
        ListNode* curr = head;
        while(curr != nullptr){
            curr = curr->next;
            count ++;
        }
        return count ;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr || k == 1){
            return head;
        }
        int listSize = length(head);

        int count = listSize / k;
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(count > 0){
            ListNode* subListPrevNode = prev;
            ListNode* subListLastNode = curr;
            // reverse 
            for(int i = 0 ;(i < k && curr != nullptr) ;i++){
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }
            // list is reversed 
            // need to link 
            if(subListPrevNode == nullptr){
                head = prev;
            }
            else{
                subListPrevNode->next = prev;
            }
            subListLastNode->next = curr;
            prev = subListLastNode;

            count --;
        }

        return head;
    }

int main()
{
    return 0;
}