#include<iostream>
#include<queue>
using namespace std;


// fifo 

int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.emplace(10);
    q.back() += 2; // add 2 to 10
    cout<<q.back(); // will print 12

    cout<<q.front();
    q.pop();

    
    return 0;
}