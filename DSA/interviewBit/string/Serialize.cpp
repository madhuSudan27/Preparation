#include<iostream>
#include<vector>
#include<string>
using namespace std;

string serialize(vector<string> &A) {
    string ans = "";
    
    for(int i = 0; i < A.size() ;i++){
        string temp = A[i];
        int len = temp.size();
        temp += to_string(len);
        ans += temp;
        ans.push_back('~');
    }
    return ans;
    
    
}

int main()
{
    return 0;
}