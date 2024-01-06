#include<iostream>
#include<vector>
using namespace std;

int solve(int A, int B, int C, int D) {
    
    // WE HAVE 3 CASES 
    return ( (A == B && C == D) || (A == C && B == D) || 
             (A == D && C == B));
}


int main()
{
    return 0;
}