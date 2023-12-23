#include<iostream>
#include<vector>
using namespace std;


int maxScore(string s) {
    // try to split and solve 
    int n = s.size();

    int countOne = 0;
    for(int i = 0;i < n;i++){
        if(s[i] == '1') countOne++;
    }
    

    // now start spliting ans count zero 

    int ans = 0, countZero = 0;

    for(int i=0;i<n-1;i++){
        if(s[i] == '0' ) countZero ++;
        else countOne --;
        ans = max(ans, countOne + countZero);
    }
    return ans; 
}

int main()
{
    return 0;
}