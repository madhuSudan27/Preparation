#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



vector<vector<int>> merge(vector<vector<int>>& intervals) {

    vector<vector<int>>ans;
    int n = intervals.size();
    if(n == 0) return ans; 

    sort(intervals.begin(), intervals.end());
    ans.push_back(intervals[0]);

    // now lets traverse and build the ans 

    // to merge the interval we have 4 cases (for sorted start)
/* 
    1. does not overlaps 
    2. completelly overlaps ( B comes within A )
    3. B partially overlaps A( B[1] > A[1]  but B[0] < A[0])
    4. B fully overlaps A but both have same start time  
*/

    for(int i = 1 ;i < n; i++){
        if(ans.back()[1]  < intervals[i][0]){
            ans.push_back(intervals[i]);
        }
        else{
            // now i have to merge the interval 
            // 2 3 and 4 cases will be covered by this 
            ans.back()[1] = max(ans.back()[1] , intervals[i][1]);
        }
    }


    return ans;
}

int main(){

    return 0;
}