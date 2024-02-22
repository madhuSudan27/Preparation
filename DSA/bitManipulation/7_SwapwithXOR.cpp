#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // concept is to chanage the bit (disSimilar )
    
    int a = 4;
    int b = 5;
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    cout << a << " " << b;

    return 0;
}