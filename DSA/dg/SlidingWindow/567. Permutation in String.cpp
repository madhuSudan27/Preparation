#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:

    bool solution (string s1 , string s2){
         vector<int> freqMap(26) , runningFreq(26);
        int n = s2.size();
        int m =s1.size();
        int start = 0;

        for(auto it : s1){
            freqMap[it - 'a'] ++;
        }

        for(int end = 0; end < n;end++){

            runningFreq[s2[end] - 'a'] ++;
            while((end - start + 1) > m && start < end){
                runningFreq[s2[start] - 'a'] --;
                start ++;
            }
            if(runningFreq == freqMap) return 1 ;
        }
        return 0;

    }
    
    bool checkInclusion(string s1, string s2) {
        // APPROACH 1 
        // use store to keep track of frequency and then match them 
        // return solution(s1,s2);

        // now lets optimize the solution by not checking freqMap each time 
        // goal is to maintain the window of size s1.size();
        int m = s1.size();
        unordered_map<char , int > mp;
        for( auto it : s1){
            mp[it] ++;
        }
        int matched = 0;
        int start = 0 ,end = 0 , n = s2.size();

        while( end < n){
            int charEnd = s2[end] ;
            if(mp.find(charEnd) != mp.end()){
                // present 
                    // then i have to decrease the freq 
                    // if freq is == 0
                     // then i have to increase the match 
                mp[charEnd] --;
                if( mp[charEnd] == 0){
                    matched ++;
                }
            }
            // check does matched == mp.size();
            if(matched == mp.size()) return 1;

            // if end > s1.size() <- then i can reduce the size of window 
            if( end >= m -1){
                char charStart = s2[start];
                if(mp.find(charStart) != mp.end()){
                    // character not formed a permutation 
                    if(mp[charStart] == 0) matched --;
                    //  already decreased the freq now we have to increase 
                    mp[charStart] ++;
                }
                start  ++;
            }
            end ++;
        }
        return false ;
    }
};
int main()
{
    return 0;
}
