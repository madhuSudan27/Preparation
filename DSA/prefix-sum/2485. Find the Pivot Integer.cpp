#include<iostream>
#include<vector>
using namespace std;

int rangeSum(int m, int n){

    return ((n * (n + 1)) / 2) - ((m*(m+1)) / 2);
}

int pivotInteger(int n) {
    
    for(int i = n/2; i <= n; i++){
        if(rangeSum(0 , i) == rangeSum(i - 1, n)){
            return i;
        }
    }

    return -1;
}

int main()
{
    return 0;
}