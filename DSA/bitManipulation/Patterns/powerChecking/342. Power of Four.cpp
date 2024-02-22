#include<iostream>
#include<vector>
using namespace std;

int solution(int n){
        if(n==1) return 1;
        if(n==0 || n%4!=0) return 0;
        return solution(n/4);
    }


bool isPowerOfFour(int n) {
       
    //    return solution(n);
        // bit manupulation 

        int count=0;
        while(n){
            if(n&1) break ;
            else count++;
            n>>=1;
        }

        return (count%2==0 && n==1);
       
}

bool checkPowerOf4(unsigned n)
{
    /// checking for power of 2 and rem 1 when divided by 3
    return !(n & (n - 1))&& (n % 3 == 1);
}
int main()
{
    // The given number n is a power of 4 if it is a power of 2 and
    // its remainder is 1 when it is divided by 3.
    return 0;
}