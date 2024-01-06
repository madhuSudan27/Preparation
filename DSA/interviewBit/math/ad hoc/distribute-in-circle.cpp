#include<iostream>
#include<vector>
using namespace std;
/* 
A items are to be delivered in a circle of size B.

Find the position where the Ath item will be delivered if we start from a given position C.

NOTE: Items are distributed at adjacent positions starting from C.

Problem Constraints
1 <= A, B, C <= 108
 */

int solve(int A, int B, int C) {
    // case 1
    if( A <= B){
        return (A + C - 1) % B ;
    }
    //case 2  
    return ((A % B) + C - 1) % B;    
}

int main()
{
    cout<<3 % 5<<endl;
    return 0;
}