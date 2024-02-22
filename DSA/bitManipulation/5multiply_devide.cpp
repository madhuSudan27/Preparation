#include<iostream>
#include<vector>
using namespace std;
int main()
{

    int n=5;
    // right shift 
    n=n>>1;// mul
    cout<<n;
    
    // left shift 
    n=n<<1;// div 
    cout<<n;
    return 0;
}