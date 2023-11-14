#include<iostream>
#include<vector>
using namespace std;

int checkPower(int num){
    // num && <-- for 0
    return (num && !(num & (num-1)));
}

int main()
{
    cout<<checkPower(0);
    return 0;
}