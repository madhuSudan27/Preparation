#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int countWays(vector<vector<int>>& ranges) {
        int n = ranges.size();
        // each group have two  posibility 
        // either go to group1 or group2

        // need to count total number of group ;
        int mod = 1e9 + 7;
        sort(ranges.begin(), ranges.end());
        int last = -1;
        int ans =1;
        for(auto it: ranges){
            if(it[0] > last){
                ans = (ans* 2) % mod;
                last = it[1];
            }
            else last = max(last , it[1]);
        }

        return ans;





        
    }
int main()
{
    return 0;
}