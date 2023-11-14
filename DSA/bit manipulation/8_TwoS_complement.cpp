#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // In other words, the negative number -1 is represented as the bitwise complement of the positive number 1, plus 1.
    // The bitwise complement of a number is the number obtained by flipping all of the bits in the number. So, the bitwise complement of 1 is 
    // 11111111111111111111111111111110. When we add 1 to this number, we get 11111111111111111111111111111111, which is the two's complement 
    // representation of -1.

    // SO a negative number is equal to the bitwise complement of its positive counterpart, plus 1.
    // negative_number = ~positive_number + 1

    // Now suppose we want to subtract 12 from 69

    // Binary representation of 69: 00000000000000000000000001000101
    // Binary representation of -12: 11111111111111111111111111110100 
    // (obtained by inverting and adding one)
    /* 
      00000000000000000000000001000101 (69)
    + 11111111111111111111111111110100 (-12)
    --------------------------------
    00000000000000000000000000111001 (57) */
    int num1=69, num2=-12;
    int Num= (num1)+((~num2)+1)
    



    return 0;
}