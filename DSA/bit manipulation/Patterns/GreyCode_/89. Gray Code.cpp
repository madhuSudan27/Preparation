#include<iostream>
#include<vector>
using namespace std;

vector<int> grayCode(int n) {
    vector<int>ans;
    for(int i=0;i<(1<<n);i++){
        ans.push_back(i^(i>>1));
    }
    

    return ans;
}


uint GrayToBinary(uint num)
{
    uint mask = num;
    while (mask) {           // Each Gray code bit is exclusive-ored with all more significant bits.
        mask >>= 1;
        num   ^= mask;
    }
    return num;
}


int main()
{
    //  num ^(xor) num>>1; <- grey code 
    

    return 0;
}