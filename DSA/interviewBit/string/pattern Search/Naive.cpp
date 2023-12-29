#include<iostream>
#include<vector>
#include<string>
using namespace std;

/* 

Slide the pattern over text one by one and check for a match.
If a match is found, then slide by 1 again to check for subsequent matches. 

 */
void search( string txt , string pat){
    int n = txt.size();
    int m = pat.size();

    for( int i = 0; i < n;i ++){
        // now search for each pattern 
        int j = 0;
        while( j < m){
            if(txt[i+j] != pat[j]){
                break;
            }
            j++;
        }
        if( j == m) cout<< i <<endl;
    }
}

int main(){
    string txt = "AABAACAADAABAAABAA";
    string pat = "AABA";

    search(txt, pat);

    return 0;
}