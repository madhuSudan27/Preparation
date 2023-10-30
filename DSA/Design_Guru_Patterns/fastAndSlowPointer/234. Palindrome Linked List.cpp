/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool check(ListNode* &dummy,ListNode*head){
        if(!head||!dummy) return 1;
        bool ans=check(dummy,head->next);
        if(!ans) return 0;
        if(head->val!=dummy->val) return 0;
        dummy=dummy->next;
        return ans;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* dummy=head;
        return check(dummy,head);
        
    }
};

class Solution {
    ListNode* reverse(ListNode* head){
        if(head==NULL){return 0;}
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL){
            return 0;
            
        }
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* reversed=reverse(slow->next);
        slow->next=reversed;
        ListNode* itr=reversed;
        while(itr!=NULL){
            if(head->val!=itr->val){
                return 0;
            }
            cout<<itr->val<<" ";
            itr=itr->next;
            head=head->next;
        }
        
        
        
        return 1;
        
    }
};