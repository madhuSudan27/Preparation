#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;

int solution(string letters){
    vector<int>fre(26, 0);
    // set<char>s;

    for(auto it: letters){
        if(it >= 'a' && it <= 'z')
            fre[it - 'a'] ++;
        //    s.insert(it);
    }
    int count = 0;
    for(int i = 0 ; i < 26 ; i++ ){
        if(fre[i] > 0) count ++;
    }
    return count;
    // return s.size();
}

int main(){
    string letters ;
    getline(cin, letters);
    cout<<solution(letters)<<endl;
    return 0;
}