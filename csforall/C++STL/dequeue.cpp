#include<iostream>
#include<deque>
using namespace std;

// list is similar to dequeue  <- check vector notes 


int main()
{
    deque<int>dq;
    dq.push_back(10);
    dq.emplace_back(200); 

    dq.pop_back(); // removes last element
    dq.push_front(20);
    dq.emplace_front(3000);
    dq.pop_front(); // removes first element

    
    return 0;
}