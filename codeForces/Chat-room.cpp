#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool solution(string str){
    bool checkH = 0, checkE = 0, checkL = 0, checkO = 0;
    vector<int>fre(26, 0);
    for(auto it: str){
        if(it == 'h') fre[it - 'a'] ++;
        else if(it == 'e'){
            // need to check 
            if(fre['h' - 'a'] >= 1){
                checkH = 1;
                fre['e' - 'a'] ++;
            }
        }
        else if(it == 'l'){
            if(fre['e' - 'a'] >= 1){
                checkE = 1;
                fre['l' - 'a'] ++;
            }
        }
        else if (it == 'o'){
            if(fre['l' -'a'] >= 2){
                checkL = 1;
                fre['o' - 'a'] ++;
            }
            if(checkE && checkH && checkL) return 1;
        }
    }
    return 0;
}

int main(){
    string str;
    cin >> str;
    bool result = solution(str);
    if(result) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}