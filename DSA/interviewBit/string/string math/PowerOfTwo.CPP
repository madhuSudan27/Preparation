#include<iostream>
#include<vector>
#include<string>
using namespace std;

// problem statement 
/* 
Find if the given number is a power of 2 or not. More specifically,
find if the given number can be expressed as 2^k where k >= 1.
Note: The number length can be more than 64, which means the number 
can be greater than 2 ^ 64 (out of long long range)
*/
// 1 <= |A| <= 104

bool solution(string str){
    int n = str.size();
    // handle the base case 
    if( n == 1 && str[n-1] == '1') return 0;
    // number is divisible only if we can reach to one 
    // if( size == 1) then we also need to reach to 1 
    int num = 0;
    while(n != 1 || str[n-1] == '1'){
        // check lastDigit  even or not 
        if( (str[n-1] - '0') % 2 != 0) return 0;
        int j = 0;
        for( int i = 0 ;i < n ;i ++){
            num = num * 10 + str[i]-'0';

            if(num < 2){ // means  the resukt digit would be 0 so handle carefully 
                if(i != 0){
                    str[j++] ='0';
                }
                continue;
            }
            // at last update the value 
            str[j++] = (num/2) -'0';
            // now also need to update the value of num for next iteation 
            // also take care of remender 
            //
            num = num - (num / 2) * 2;
        }
        n = j;
    }
    return 1;

}

int main()
{
    string str ="128";
    bool ans = solution(str);
    cout<<ans <<endl;
    return 0;
}