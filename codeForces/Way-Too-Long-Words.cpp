#include<iostream>
#include<string>
using namespace std;

string  abbreviationOfWord(string str){
    int n = str.length();
    if(n <= 10){
        return str;
    }
    // else i have to change 
    // the rest word is n-2 ;
    string ans = "";
    ans.push_back(str[0]);
    ans += to_string(n-2);
    ans.push_back(str[n-1]);
    return ans; 
}
int main(){
    int n;
    cin>>n ;
    while( n--){
        string str ;
        cin>> str;

        cout<<abbreviationOfWord(str)<<endl;
    } 

    return 0;
}