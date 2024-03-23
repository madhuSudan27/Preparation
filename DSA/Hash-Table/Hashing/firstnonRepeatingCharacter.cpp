#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int solution(string s){
    unordered_map<char, int>mp;
    
    for(int index = 0; index < s.size(); index ++){
        mp[s[index]]+= 1;
    }

    // now lets check 
    
    for(int index = 0; index < s.size(); index ++){
        if(mp[s[index]] == 1){
            return index;
        }
    }
    
    return -1;
}
int main(){
    string s;
    cin>> s;
    cout<< solution(s);
    return 0;
}