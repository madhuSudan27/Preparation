#include<iostream>
#include<vector>
using namespace std;
int main()
{

    // obserbation 
    // lowercase <- has 5th bit as set 
    // uppercase <-- 5th bit unset 

    // so we can easly convert upper to lowe and lower to upper by just changing the bit 
    // for lower to upper 
        // goal is to make 5th bit unset <-- so 
        cout<<char('a'&(~(1<<5)))<<endl;
    // now upper to lower
        // simply change the unset to set
        cout<<char('A' |(1<<5))<<endl; 
    
    //     Actually char of 1<<5 is _(space) that is 32(ascii);
    //  Take any upper case letter and its |(or) with space will get the corresponding lower case letter;
     cout<<char('A'|' ')<<endl;

    // same for underScore (_)  95(ascii)
    // Take any lower case letter and its &(and) with _(underscore) will get the corresponding upper case letter;`

    cout<<char('c'&'_')<<endl; 


    // new Observation 
    //    We can easily find a letter’s position [1-26] in the 
    // alphabet by taking its bitwise AND with ASCII 31 (00011111 in binary). 
    // The case of the letter is irrelevant here. 
    
    // (‘A’ & 31) returns position 1
    // ex A in binary 01000001 & 00011111

    //     (‘c’ & 31) returns position 3
    //     return 0;


    Set union A | B
    Set intersection A & B
    Set subtraction A & ~B
    Set negation ALL_BITS ^ A or ~A
    Set bit A |= 1 << bit
    Clear bit A &= ~(1 << bit)
    Test bit (A & 1 << bit) != 0
    Extract last bit A&-A or A&~(A-1) or x^(x&(x-1))
    Remove last bit A&(A-1)
    Get all 1-bits ~0==-1
}