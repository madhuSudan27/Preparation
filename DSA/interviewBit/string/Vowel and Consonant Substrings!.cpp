#include<iostream>
#include<vector>
#include<string>
using namespace std;
/* 
Given a string A consisting of lowercase characters.

You have to find the number of substrings in A which starts with vowel and end with consonants or vice-versa.

Return the count of substring modulo 109 + 7
 */

bool isVowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int vowelCount(string str){
    int count = 0;
    for( auto it : str){
        if(isVowel(it)){
            count ++;
        }
    }
    return count;
}

int consonenetCount(string str){
    int count = 0;
    for( auto it : str){
        if(!isVowel(it)){
            count ++;
        }
    }
    return count;
}

int solve(string A) {
    // if i know how many vowel is further and how many consonenet is further then i can count 
    int mod = 1e9 + 7;
    
    int totalVowel = vowelCount(A);
    int totalConsonent =  consonenetCount(A);
    
    int vowelSeen = 0 , consonenetSeen = 0;
    
    int ans = 0;
    
    for(auto it : A){
        if(isVowel(it)){
            vowelSeen ++;
            ans = ( ans + totalConsonent - consonenetSeen) % mod;
        }
        else {
            consonenetSeen ++;
            ans = ( ans + totalVowel - vowelSeen) % mod;
        }
    }
    return ans % mod;
}

int main()
{
    return 0;
}