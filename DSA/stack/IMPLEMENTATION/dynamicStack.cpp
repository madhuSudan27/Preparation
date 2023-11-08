#include<iostream>
using namespace std;

// goal is to implement a dynamic stack so it could increase its capacity automatically like vector


template<typename T>

class stack{
    // int *data ;
    T * data;
    int index;
    int capacity;

    public:
        stack(){
            data =new T[1];
            index=0;
            capacity=1;
        }

        int size(){
            return index;
        }
        bool isEmpty(){
            return index==0;
        }
        // top 
        int top(){
            if(isEmpty()) return -1;
            return data[index-1];
        }
        // pop
        int pop(){
            if(isEmpty()){
                cout<<"Stack is Empty"<<endl;
                return -1;
            }
            return data[--index];
        }
        // push

        void push(int val){
            // check whether the capacity == index
            if(capacity==index){
                T * newData= new T[2*capacity];
                for(int i=0;i<index;i++){
                    newData[i]=data[i];
                }
                delete data;
                data=newData;
                capacity=2*capacity;
            }
            data[index++]=val;
        }


};

int main(){

    stack<int> st;
    cout<<st.size();
    st.push(2);
    st.push(3);
    st.push(3);
    cout<<st.size();
    st.push(3);
    cout<<st.size();

    cout<<st.pop();
    cout<<st.size();

    return 0;
}