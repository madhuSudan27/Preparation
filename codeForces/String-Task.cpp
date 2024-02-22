#include<iostream>
#include<string>
using namespace std;
bool isVowel (char c){
    if(c == 'A' || c == 'O' || c == 'Y' || c == 'E' || c == 'U' || c == 'I'
     || c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i'){
        return 1;
    }
    return 0;
}
string completeTask(string str){
    string ans = "";
    for(auto it: str){
        if(! isVowel(it)){
            // then do something 
            ans.push_back('.');
            if(it >= 'A' && it <= 'Z'){
                ans.push_back((it - 'A') + 'a');
            }
            else ans.push_back(it);
        }
    }
    return ans;
}

int main(){
    string str;
    cin>> str;
    // lets convert this to lower case 
    cout<<completeTask(str)<<endl;

    // one more approach is just lower all the capital letter 
    


    return 0;
}