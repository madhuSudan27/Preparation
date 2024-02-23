#include<iostream>
#include<string>
using namespace std;

bool isDubbed(char a, char b, char c){
    return (a == 'W' && b == 'U' && c == 'B');
}

string solution(string str){
    string ans = "";
    int n = str.size();
    // cout<<n<<endl;
    if(n < 3) return str;
    // remove beginning WUB
    int i = 0; 
    while(i <= n - 3  && isDubbed(str[i] , str[i + 1], str[i + 2])){
        i += 3;
    }
    // NOW DEAL WITH MIDDLE  and last 
    while( i <= n - 3){
        string temp = "";
        while( i <= n-3 && ! isDubbed(str[i], str[i+1], str[i+ 2])){
            temp.push_back(str[i]);
            i ++;

            if( i == n - 2){
                temp.push_back(str[n - 2]);
                temp.push_back(str[n - 1]);
            }
        }
        ans += temp;
        if(temp.size() >= 1) ans.push_back(' ');
        i += 3;
    }
    // if string is over 
    if(i == n){
        ans.pop_back();
        return ans;
    }
    while(i < n){
        ans.push_back(str[i]);
        i++;
    }
   
   
    return ans;
}

int main(){
    // string song;
    // cin >> song;

    // string original= solution(song);
    // cout<<original<<endl;
    string s;
	int flag=1;
	cin>>s;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
	        i+=2;
	        if(!flag){
	            cout<<" ";
	        }
	        continue;
	    }else {
	        flag=0;
	        cout<<s[i];
	    }
	}
	return 0;

}