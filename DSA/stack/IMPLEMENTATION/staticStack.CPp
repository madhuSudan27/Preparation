#include<iostream>
using namespace std;

class stack{
    int *data;
    int index;
    int capacity;
    public:
        stack(int size){
            data = new int[size];
            index=0;
            capacity=size;

        }

        int size(){
            return index;
        }
        bool isEmpty(){
            return index==0;
        }

        int top(){
            if(isEmpty()) return -1;
            return data[index-1];
        }
        void push(int val){
            // now i have to check for the capacity 
            if(index==capacity){
                cout<<"stack is full";
                return ;
            }
            data[index]=val;
            index++;
        }
        int pop(){
            if(isEmpty()) {
                cout<<"Stack is Empty";
                return -1;
            }
            int val=data[index-1];
            index--;
            return val;
        }
};
int main(){
    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    cout<<s.pop();
    cout<<s.pop();
    cout<<s.pop();
    cout<<s.size();
    cout<<s.pop();


    return 0;
}