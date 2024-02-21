#include<iostream>
#include<queue>
using namespace std;
/* 

push <- O(log n)
pop <- O(log n)
top <- O(1)

 */

int main()
{
    priority_queue<int>pq; // <- max heap 
    pq.pop();
    pq.top(); //<- top (max) element 

    // min heap 
    priority_queue<int, vector<int>, greater<int>> pq1;



    return 0;
}