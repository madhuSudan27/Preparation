#include<iostream>
#include<vector>
using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int num1 = 10;
    int num2 = 20;

    swap(num1, num2);
    cout<<num1 <<" "<<num2<<endl;
    return 0;
}