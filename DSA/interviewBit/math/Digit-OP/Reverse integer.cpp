#include<iostream>
#include<vector>
using namespace std;

int solution(int num ){
    int ans = 0;
    
    while(num > 0){
        int rem = num % 10;
        num /= 10;
        
        if(ans > INT_MAX/10 || ans == INT_MAX/10 && rem > 7){
            return 0 ;
        }
         
        if(ans < INT_MIN/10 || ans == INT_MIN/10 && rem < -8){
            return 0 ;
        }
        ans = ans * 10 + rem;
    }
    return ans ;
}

int reverse(int A) {
    
    if(A > INT_MAX || A < INT_MIN) return 0;
    // deal with negative also 
    bool neg = 0;
    if(A < 0){ 
        neg = 1;
        A *= -1;
    }
    
    int reversed = solution(A);
    if(neg) return -reversed ;
    return reversed;
    // -2147483647 - 1
}


int main()
{
    return 0;
}