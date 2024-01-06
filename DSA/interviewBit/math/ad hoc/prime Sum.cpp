#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n){
    for(int i = 2 ; i * i <= n ;i++){
        if(n % i == 0) return 0;
    }
    return 1;
} 
vector<int> primesum(int A) {
    
    for(int i = 2; i <= 20000000/2; i++ ){
        if(isPrime(i)){
            if(isPrime(A - i)){
                return {i, A-i};
            }
        }
    }
    return {};
    
}

int main()
{
    return 0;
}