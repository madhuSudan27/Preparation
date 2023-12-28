#include<iostream>
#include<vector>
#include<string>
using namespace std;

void makeLower(string & str){
    for(int i = 0; i < str.size() ;i++){
        if( str[i] >= 65 && str[i] <= 90){
            // now make it lower 
            str[i] += 32;
        }
    }
}

bool isCharacter( char c){
    return (c >= 'a' && c <= 'z' || c >= '0' && c <= '9');
}

int Solution(string A) {
    
    // one approach is to make an new string of no space and special character 
    // but space consuming 
    // now lets try to solve it in O(1) space complexity 
    int start = 0 , end = A.size();
    // need to make entire string lower case
    makeLower(A);
    end --;
    
    while(start <= end){
        if(A[start] == A[end]){
            start ++;
            end --;
        }
        else{
            if(! isCharacter(A[start])) start++;
            else if(! isCharacter(A[end])) end --;
            else return 0;
        }
    }   
    return 1;
    
}

int main()
{
    return 0;
}