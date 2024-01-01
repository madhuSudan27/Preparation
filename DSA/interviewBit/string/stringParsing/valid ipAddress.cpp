#include<iostream>
#include<vector>
#include<string>
using namespace std;

/* 
Given a string containing only digits, restore it by returning all possible valid IP address combinations.

A valid IP address must be in the form of A.B.C.D, where A,B,C and D are numbers from 0-255. The numbers cannot be 0 prefixed unless they are 0.

Example:

Given “25525511135”,

return [“255.255.11.135”, “255.255.111.35”]. (Make sure the returned strings are sorted in order)
 */

bool isValid(string str){
    if(str[0] == '0') return 0;
    int num = stoi(str);
    return num <= 255;
}

void solution(int index, int count , string ds , string ipAddress, vector<string>& ans){
    // base case
    if( index >= ipAddress.size() || count >= 4){
        if( index == ipAddress.size() && count == 4){
            ds.pop_back();
            ans.push_back(ds);
        }
        return ;
    }
    // pick one 
    solution(index + 1 ,count + 1,ds+ipAddress.substr(index,1)+"." ,ipAddress,ans);
    // pick 2 letter 
    if(index + 2 <= ipAddress.size() && isValid(ipAddress.substr(index,2))){
        solution(index + 2 ,count + 1,ds+ipAddress.substr(index,2)+"." ,ipAddress,ans);
    }
    if(index + 3 <= ipAddress.size() && isValid(ipAddress.substr(index,3))){
        solution(index + 3 ,count + 1,ds+ipAddress.substr(index,3)+ "." ,ipAddress,ans);
    }
    
}

vector<string> restoreIpAddresses(string ipAddress) {
    
    int n = ipAddress.size();
    if( n<4  ||n >12) return {};
    // i have to use recursion 
    vector<string>ans;
    // try to generate all possible ipAddress 
    // also need to take care that the number could not nbe zero prefixed 
    
    // need to maintain count because we can only have max of 4 substring 
    
    solution(0 , 0 , "" , ipAddress , ans);
    return ans;
}

int main()
{
    return 0;
}