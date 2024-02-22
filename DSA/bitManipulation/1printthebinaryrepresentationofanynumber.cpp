#include<iostream>
using namespace std;

void binaryRepresentation(int num){
    // will consider all 32 bits 
    for(int i=31;i>=0;i--) {
        cout<<((num>>i)&1);
    }
}
int main(){
    int num;
    cin>>num;
    binaryRepresentation(num);
    return 0;
}