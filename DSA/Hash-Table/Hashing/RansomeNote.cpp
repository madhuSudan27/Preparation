#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool solution(string note , string magazine){
    unordered_map<char, int> fre;
    for(auto it: magazine){
        fre[it] ++;
    }
    for(auto it : note){
        if(fre.find(it) != fre.end()){
            fre[it] --;
            if(fre[it] == 0){
                fre.erase(it);
            }
        }
        else{
            return 0;
        }
    }
    
    return 1;
}

int main(){
    string note , magazine;
    cin >> note >> magazine;
    cout<< solution(note , magazine);
    return 0;
}