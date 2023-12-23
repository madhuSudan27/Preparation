/* Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.

Do not modify the linked list.

 

Example 1:


Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
Explanation: There is a cycle in the linked list, where tail connects to the second node.
Example 2:


Input: head = [1,2], pos = 0
Output: tail connects to node index 0
Explanation: There is a cycle in the linked list, where tail connects to the first node.
Example 3:


Input: head = [1], pos = -1
Output: no cycle
Explanation: There is no cycle in the linked list.*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* temp=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                while(slow!=temp){
                    slow=slow->next;
                    temp=temp->next;   
                }
                return slow;   
            }
        }
        return NULL;
        
    }
};
/* 

Once slow & fast collab we will return either slow OR fast is same thing. As, they will return tail connects to node index 1


Let's Do some math work. To understand this solution, you just need to ask yourself this question.

Assume the distance from head to the start of the loop is x1
the distance from the start of the loop to the point fast and slow meet is x2
the distance from the point fast and slow meet to the start of the loop is x3
What is the distance fast moved? What is the distance slow moved? And their relationship?

x1 + x2 + x3 + x2
x1 + x2
x1 + x2 + x3 + x2 = 2 (x1 + x2)
Q: Now your question Why x1 + x2 + x3 + x2 = 2 (x1 + x2)?

Ans: Its just the relationship between the distance travelled by fast pointer and the distance travelled by the slow pointer.
As fast pointer, runs twice the speed of slow pointer. Therefore, when they meet, distance travelled by fast pointer will be 2*(distance travelled by slow pointer).

Therefore, x1 = x3. */