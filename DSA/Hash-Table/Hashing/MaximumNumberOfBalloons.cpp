#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

int solution(string s, string word){
    vector<int>fre(26, 0);

    for(auto it: s){
        fre[it - 'a'] += 1;
    }

    int ans = s.size();

    for(auto it : word){
        if(it == 'l' || it == 'o'){
            ans = min(ans , fre[it - 'a'] / 2);
        }
        else {
            ans = min(ans, fre[it - 'a']);
        }
    }
    return ans == s.size() ? -1 : ans;
}

int main(){
    string s;
    cin >> s;
    string word = "balloon";
    cout << solution(s, word);
    return 0;
}