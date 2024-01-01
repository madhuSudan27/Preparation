#include<iostream>
#include<vector>
#include<string>
using namespace std;

string findDigitsInBinary(int num) {
    string ans = "";
    if( num == 0) return "0";
    while( num > 0){
        if(num % 2 == 0){
            ans.push_back('0');
            num = num / 2;
        }
        else{
            ans.push_back('1');
            num = num / 2;
        }
    }
    reverse(ans.begin() , ans.end());
    return ans;
}

int main()
{
    return 0;
}