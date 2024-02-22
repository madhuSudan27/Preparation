#include<iostream>
#include<string>
using namespace std;

void makeStringLowerCase(string &str){
    int n = str.size();
    for(int i = 0 ;i < n; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = (str[i]- 'A' + 'a');
        }
    }
    
}

int solution( string str1, string str2){
    int n = str1.size();
    if( str1 == str2) return 0;
    else if (str1 < str2) return -1;
    else return 1;
}

int main(){
    string str1 , str2;
    cin>> str1 >> str2;

    makeStringLowerCase(str1);
    makeStringLowerCase(str2);
    cout<<solution(str1, str2)<<endl;


    return 0;
}