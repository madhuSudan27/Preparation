#include<iostream>
#include<stack>
using namespace std;
// lifo 

// all operations are O(1)


int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.emplace(4);
     
    cout<<s.top(); // will print 4
    cout<<s.size();

    s.pop();
    cout<<s.size();
    cout<<s.empty();

    // swap two element 
    stack<int> s1, s2;
    s1.swap(s2);

    return 0;
}