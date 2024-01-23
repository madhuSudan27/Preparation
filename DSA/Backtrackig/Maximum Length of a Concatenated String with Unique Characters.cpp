#include<iostream>
#include<vector>
#include<string>   
using namespace std;

bool isUniqueCharacter(string str){
    vector<int>fre(26);
    for(auto it: str){
        fre[it -'a'] ++;
        if(fre[it - 'a'] > 1){
            return 0;
        }
    }
    return 1;
}

void solution(int index, vector<string>arr, string ds, int n , int & ans){
    if(index >= n){
        int s= ds.size();
        ans = max(ans ,s );
        return;
    }

    string newDs = ds +arr[index];
    if(isUniqueCharacter(newDs)){
        solution( index + 1, arr ,newDs, n, ans);
    }
    solution(index  + 1, arr ,ds, n, ans);
}

int maxLength(vector<string>& arr) {

    // some corner cases and gotchas 
    int n = arr.size();
    if(n == 1){
        if (isUniqueCharacter(arr[0])){
            return arr[0].size();
        }
        0;
    }

    vector<string> newArr;
    for(auto it: arr){
        if(isUniqueCharacter(it)){
            newArr.push_back(it);
        }
    }
    // now we have only all unique character string arr ;
    //  now we can write logic 
    int ans = 0;
    n = newArr.size();
    if(n == 0 ) return 0;

    solution(0 , newArr, "", n, ans);

    return ans;    
}
int main()
{
    return 0;
}