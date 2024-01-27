#include<iostream>
#include<vector>
#include<stack>
using namespace std;
string removeDuplicateLetters(string s) {
        vector<int>fre(26);
        for(int i = 0 ;i < s.size(); i++){
            fre[s[i] - 'a'] = i;
        }
        vector<bool>vis(26);
        stack<int >st;


        for(int i = 0 ;i < s.size() ;i ++){

            if(vis[s[i] - 'a'] == 1) continue ;  // s[i] already exists in string ans we need lexicographically  smallest 
            while(!st.empty() && s[st.top()] > s[i]  && fre[s[st.top()] - 'a'] > i){
                vis[s[st.top()] - 'a'] = 0; 
                st.pop();
            }
            
            st.push(i);
            vis[s[i]  - 'a']  = 1;
        }

        string ans =  "";
        while(!st.empty()){
            ans.push_back(s[st.top()]);
            st.pop();

        }
        reverse(ans.begin(), ans.end());

        return ans;
        
        
    }

int main()
{
    return 0;
}