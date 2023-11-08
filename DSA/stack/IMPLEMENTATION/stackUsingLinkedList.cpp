#include<iostream>
#include<climits>
using namespace std;

template <typename T>
class Node{
    public: 
    T data;
    Node<T> * next;

    Node(T data){
        this->data=data;
        this->next=NULL;
    }
};

template<typename T>
class Stack{
    Node<T>* head;
    int size;
    public:

    Stack(){
        head=NULL;
        size=0;
    }

    bool isEmpty(){
        return head==NULL;
    }
    int getSize(){
        return size;
    }
    int top(){
        if(!isEmpty()){
            return head->data;
        }
        return -1;
    }
    void push(T val){
        Node<T>* newNode= new Node<T>(val);
        newNode->next=head;
        head=newNode;
        size++;
    }
    int pop(){
        if(isEmpty()) return -1;
        int val=head->data;
        head=head->next;
        size--;
        return val;
    }

    
};

int main(){
    Stack<int>s;
    cout<<s.isEmpty()<<" ";
    s.push(10);
    s.push(20);
    cout<<s.getSize()<<" "<<endl;
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.getSize()<<" "<<endl;


    return 0;
}
