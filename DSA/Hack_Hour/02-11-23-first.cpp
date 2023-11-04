/* You are given a 0-indexed string word of length n consisting of digits, and a positive integer m.

The divisibility array div of word is an integer array of length n such that:

div[i] = 1 if the numeric value of word[0,...,i] is divisible by m, or
div[i] = 0 otherwise.
Return the divisibility array of word.
Example 1:

Input: word = "998244353", m = 3
Output: [1,1,0,0,0,1,1,0,0]
Explanation: There are only 4 prefixes that are divisible by 3: "9", "99", "998244", and "9982443". */

#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int>solution(string word, int m) {
    int n=word.size();
    long long int num=0;
    vector<int>ans;
    for(int i=0;i<n;i++){
        long long val=word[i]-'0';
        num=(num*10+val)%m;
        if(num==0) ans.push_back(1);
        else ans.push_back(0);
    }
    return ans;
}
int main(){
    string word="998244353";
    int m=3;
    vector<int>ans=solution(word,m);
    for(auto it:ans){
        cout<<it<<" ";
    }
}