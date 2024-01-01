#include<iostream>
#include<vector>
using namespace std;
int isPrime(int A) {
    if( A == 0 || A == 1) return 0;
    
    for( int i = 2 ;i * i <= A ;i++){
        if( A % i == 0) return 0;
    }
    return 1;
}
int main()
{
    return 0;
}