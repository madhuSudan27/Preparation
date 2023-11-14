#include<iostream>
#include<vector>
using namespace std;

void binaryRepresentation(int num){
    // will consider all 32 bits 
    for(int i=31;i>=0;i--) {
        cout<<((num>>i)&1);
    }
}

int countSetBit(int num){
    int count=0;
    for(int i=0;i<32;i++){
        if((num&(1<<i))!=0){
            count++;
        }
    }
    return count;
}
int main()
{

    int num;
    cin>>num;
    binaryRepresentation(num);
    cout<<endl;
    cout<<countSetBit(num);
    return 0;
}