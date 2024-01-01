#include<iostream>
#include<vector>
using namespace std;

/* Given a number A, find all prime numbers up to A (A included).
Make sure the returned array is sorted. */

vector<int> sieve(int A) {
    vector<int>ans;
    
    vector<int>prime(A+1,1);
    for( int num = 2 ; num *num <= A; num ++){
        // now i need to mark all the prime in range 
        if(prime[num]){
            for( int i = num *num ; i <= A; i += num){
                prime[i] = 0;
            }
        }
    }
    for( int i = 2; i <= A;i++){
        if(prime[i]) ans.push_back(i);
    }
    return ans;
    
}
int main()
{
    return 0;
}