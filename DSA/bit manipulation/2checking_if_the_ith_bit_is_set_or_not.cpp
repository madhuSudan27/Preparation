#include<iostream>
#include<vector>
using namespace std;

int  checkSetBit(int num, int ithBit){
    // cout<<(1<<ithBit)<<" ";
    return (num&(1<<ithBit));
}

int main(){

    cout<<checkSetBit(10,1);



    return 0;
}