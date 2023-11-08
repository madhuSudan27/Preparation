#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class MyQueue {
public:

    stack<int>s1;
    stack<int>s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        // the main thing is to i have to manage the order 
        // so always take care of are we storing in curect order 
        s1.push(x);
        
    }
    
    int pop() {
        while(!s1.empty()){
            int Top=s1.top();
            s1.pop();
            s2.push(Top);
        }
        // now i have all the element in s2
        // just store the s2 top and return the ans;
        int ans=s2.top();s2.pop();
        
        while(!s2.empty()){
            int Top=s2.top();
            s1.push(Top);
            s2.pop();
        }
        return ans;
        
    }
    
    int peek() {
         while(!s1.empty()){
            int Top=s1.top();
            s1.pop();
            s2.push(Top);
        }
        // now i have all the element in s2
        // just store the s2 top and return the ans;
        int ans=s2.top();
        while(!s2.empty()){
            int Top=s2.top();
            s1.push(Top);
            s2.pop();
        }
        return ans;
        
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */