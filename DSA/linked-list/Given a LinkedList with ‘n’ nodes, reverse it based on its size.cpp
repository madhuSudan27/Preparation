#include<iostream>
#include<vector>
using namespace std;
// this problem is extension of previous one Reverse Linked list ||

/* 
Question 

If ‘n’ is even, reverse the list in a group of n/2 nodes.
If n is odd, keep the middle node as it is, reverse the first ‘n/2’
 nodes and reverse the last ‘n/2’ nodes.
 */

// Approach 
// we already learn how to reverse(middle of) linked list from left to right  
// *** where left could be 1 <= n or right could be 1 <= n ***


// When ‘n’ is even we can perform the following steps:

// Reverse first ‘n/2’ nodes: head = reverse(head, 1, n/2)  <- head will keep  reversed list 
// Reverse last ‘n/2’ nodes: head = reverse(head, n/2 + 1, n)
// When ‘n’ is odd, our algorithm will look like:

// head = reverse(head, 1, n/2)
// head = reverse(head, n/2 + 2, n)


int main()
{
    return 0;
}