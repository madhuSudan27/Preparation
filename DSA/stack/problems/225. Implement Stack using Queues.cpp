#include<iostream>
#include<stack>
#include<queue>
using namespace std;


class MyStack {
public:
    queue<int>q1;
    queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        // idea is to make a queue like stack(q2) so we can access element faster
        // so
        // take an element in one queue 
        //  and push rest of  elements from other queue 
        // later swap
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1,q2);
    }
    
    int pop() {
        if(!q2.empty()){
            int val=q2.front();
            q2.pop();
            return val;
        }   
        return -1;
    }
    
    int top() {
        return q2.front();
        
    }
    
    bool empty() {
        return q2.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */


//*****************************************************************************
class MyStack {
public:
    // queue<int>q1;
    // queue<int>q2;
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        int n=q.size();
        q.push(x);
        while(n>0){
            q.push(q.front());
            q.pop();
            n--;
        }
    }
    
    int pop() {
        int val=q.front();
        q.pop();
        return val;
    }
    
    int top() {
       return q.front();
        
    }
    
    bool empty() {
        return q.size()==0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */