#include<iostream>
#include<vector>
#include<string>
using namespace std;

/* 
In a long hallway some soldiers are walking from left to right and some from right to left all at the same speed.

Every time while walking they cross through another soldier they salute and move ahead.

Given a string A of length N showing the soldiers' direction they are walking. 
'<' denotes a soldier is walking from right to left, and '>' denotes a soldier is walking from left to right. 
Return the number of Salutes done.



Problem Constraints
1 <= N <= 105
A = {'<', '>'}


Input Format
The first argument is a string A.


Output Format
Return a single integer denoting the number of salutes done.


Example Input
Input 1:
A = '>>><<<'
Input 2:

A = '<>'
 */

long countSalutes(string A) {
    
    long long  rightToLeft = 0;
    
    for(auto it: A){
        if( it == '<'){
            rightToLeft ++;
        }
    }
    // now travelling to right if any soldier is travelling to left then i have to salute 
    
    long long  salutesDone = 0;
    for( auto it : A){
        if( it == '>' && rightToLeft > 0 ){
            salutesDone += rightToLeft;
        }
        else {
            rightToLeft --;
        }
    }
    return salutesDone;
}

int main()
{
    return 0;
}