#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

int longestPalindrome(string s){
    int n = s.size();
    vector<int>fre(26, 0);
    int ans = 0;
    for(auto it : s){
        fre[it - 'a'] ++;
    }
    // find the maximum odd fre 
    // then lets find the even fre 
    int maxOddFre = -1;
    bool odd = 0;
    for(int index = 0; index <= 25; index ++){
        if(fre[index] % 2 == 0){
            ans += fre[index];
        }
        else {
            ans += fre[index] - 1;
            odd = true;
        }
    }
    if(odd) ans ++; // one odd

    return ans;

}

int main(){
    string s;
    cin >> s;
    cout<< longestPalindrome(s);
    return 0;
}