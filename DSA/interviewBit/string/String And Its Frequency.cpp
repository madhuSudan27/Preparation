#include<iostream>
#include<vector>
#include<string>
using namespace std;
/* 
 Given a string A with lowercase english alphabets and you have to return a string in which,
  with each character its frequency is written in adjacent.
 */

string solve(string A) {
    vector<int>freq(26);
    for(auto it: A){
        freq[it - 'a'] ++;
    }
    
    // now i have all the freq 
    string ans = "";
    for(auto it : A){
        if(freq[it - 'a'] != -1){
            ans.push_back(it);
            string temp = to_string(freq[it - 'a']);
            ans += temp ;
            freq[it - 'a'] = -1;
        }
    }
    return ans;
}


int main()
{
    return 0;
}