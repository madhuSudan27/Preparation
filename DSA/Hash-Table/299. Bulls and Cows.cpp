#include<iostream>
#include<vector>
#include<string>
using namespace std;


 string getHint(string secret, string guess) {
    vector<int>secretFre(10 , 0);
    vector<int>guessFre(10 , 0);
    int n = secret.size();

    for(auto it : secret){
        secretFre[it - '0'] ++;
    }

    for(auto it : guess){
        guessFre[it - '0'] ++;
    }

    int bulls = 0;
    for(int i = 0; i < n; i++){
        if(secret[i] == guess[i]){
            secretFre[ secret[i] - '0'] --;
            guessFre[ secret[i] - '0'] --;
            bulls ++;
        }
    }
    int cows = 0;

    for(int i = 0 ; i<= 9; i++){
        if(secretFre[i] > 0 && guessFre[i] > 0){
            cows += min(secretFre[i] ,  guessFre[i] );
        }
    }
    
    string ans = "";
    ans += to_string(bulls);
    ans += "A";
    ans += to_string(cows);
    ans += "B";
    return ans;
}


int main()
{
    return 0;
}