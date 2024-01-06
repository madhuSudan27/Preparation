#include<iostream>
#include<vector>
using namespace std;
/* 

Problem Description

Given the position of a Bishop (A, B) on an 8 * 8 chessboard.

Your task is to count the total number of squares that can be visited by the Bishop in one move.

The position of the Bishop is denoted using row and column number of the chessboard.
 */


int solve(int A, int B) {
    // IT WILL MOVE IN ALL 4 DIGONAL DIRECTION 
    
    int upLeftDiagonal = min(8 - A , B - 1); // 3
    
    int upRightDiagonal = min(8 - A , 8 - B); // 4
    
    int bottomLeftDiagonal = min(A - 1 , B - 1);
    int bottomRightDiagonal = min(A - 1 , 8 - B );
    return upLeftDiagonal + upRightDiagonal + bottomLeftDiagonal +bottomRightDiagonal;
}

int main()
{
    return 0;
}