#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

int longestRepetitions(string str){
    int n = str.size();
    int index = 0, ans = 0;
    unordered_map<char,int>mp;

    for(int i = 0; i < n; i++){
        mp[str[i]] ++;
        while( index < n && mp.size() > 1){
            mp[str[index]] --;
            if(mp[str[index]] == 0){
                mp.erase(str[index]);
            }
            index ++;
        }
        ans = max( ans, mp[str[index]]);
    }
    return ans;

}

int main(){
    string str;
    cin >> str;
    // ATTCGGGA

    cout<<longestRepetitions(str)<< endl;

    return 0;
}