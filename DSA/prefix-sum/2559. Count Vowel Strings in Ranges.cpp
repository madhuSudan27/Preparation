#include<iostream>
#include<vector>
using namespace std;

/* 

You are given a 0-indexed array of strings words and a 2D array of integers queries.

Each query queries[i] = [li, ri] asks us to find the number of strings present in the range li to ri (both inclusive) of words that start and end with a vowel.

Return an array ans of size queries.length, where ans[i] is the answer to the ith query.

Note that the vowel letters are 'a', 'e', 'i', 'o', and 'u'.

 

Example 1:

Input: words = ["aba","bcb","ece","aa","e"], queries = [[0,2],[1,4],[1,1]]
Output: [2,3,0]
Explanation: The strings starting and ending with a vowel are "aba", "ece", "aa" and "e".
The answer to the query [0,2] is 2 (strings "aba" and "ece").
to query [1,4] is 3 (strings "ece", "aa", "e").
to query [1,1] is 0.
We return [2,3,0].
Example 2:

Input: words = ["a","e","i"], queries = [[0,2],[0,1],[2,2]]
Output: [3,2,1]
Explanation: Every string satisfies the conditions, so we return [3,2,1].
 

Constraints:

1 <= words.length <= 105
1 <= words[i].length <= 40
words[i] consists only of lowercase English letters.
sum(words[i].length) <= 3 * 105
1 <= queries.length <= 105
0 <= li <= ri < words.length


 */


 bool isVowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
bool check(string s){
    int n = s.size();
    return (isVowel(s[0]) && isVowel(s[n-1]));
    
}
vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
    int n = words.size();
    vector<int>prefix(n, 0);
    int m = queries.size();
    vector<int> ans;
    
    // check for the first word 
    if(check(words[0])){
        prefix[0] = 1;
    }
    for(int index = 1; index < n; index++){
        prefix[index] = prefix[index - 1] + check(words[index]);
    }

    for(int index = 0; index < m; index ++){
        if(queries[index][0] == 0){
            ans.push_back(prefix[queries[index][1]]);
        }
        else{
            ans.push_back(prefix[queries[index][1]] - prefix[queries[index][0] - 1]);
        }
    }

    return ans;
}

int main()
{
    return 0;
}