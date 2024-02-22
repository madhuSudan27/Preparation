#include<iostream>
#include<string>
using namespace std;

string solution(string str){
    string ans = "";
    int one = 0;
    int two = 0;
    int three = 0;
    int n = str.size();
    for(int i = 0; i < n; i++){
        if(str[i] == '1') one ++;
        else if(str[i] == '2') two ++;
        else if(str[i] == '3') three ++;
    }

    while(one --){
        ans.push_back('1');
        ans.push_back('+');
    }
    while(two --){
        ans.push_back('2');
        ans.push_back('+');
    }
    while(three --){
        ans.push_back('3');
        ans.push_back('+');
    }
    // remove last + 
    ans.pop_back();

    return ans;

}
int main(){
    string str = "";
    cin >> str;

    cout<<solution(str);

    return 0;
}