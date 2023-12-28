#include<iostream>
#include<vector>
#include<string>
using namespace std;

/* 
You are given a string A which is a serialized string. You have to restore the original array of strings.

The string in the output array should only have lowercase english alphabets.

Serialization: Scan each element in a string, calculate its length and append it with a string and a element separator or deliminator (the deliminator is ~). We append the length of the string so that we know the length of each element.

For example, for a string 'interviewbit', its serialized version would be 'interviewbit12~
 */

vector<string> deserialize(string A) {
    vector<string> ans ;
    int i = 0;
    int n = A.size();
    while(i < n){
        string temp = "";
        // scan the word 
        while(A[i] >= 'a' && A[i] <= 'z'){
            temp += A[i];
            i++;
        }
        ans.push_back(temp);
        //
        while((A[i] >= 48 && A[i] <= 57) || A[i] == '~'){
            i++;
        }
    }
    return ans;
}

int main()
{
    return 0;
}