#include<iostream>
#include<vector>
using namespace std;
/* 
You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.

Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).

Return intervals after the insertion.

 

Example 1:

Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
Output: [[1,5],[6,9]]
Example 2:

Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
Output: [[1,2],[3,10],[12,16]]
Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].
 */


vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    vector<vector<int>>ans;

    int n = intervals.size();
    int i = 0;
    // case 1
    while( i < n && intervals[i][1] < newInterval[0]){
        ans.push_back(intervals[i]);
        i++;
    }

    // case 2
    // need to check carefully how these intervals will overlap 
    // dry run example 2 <- for better underStanding
    while( i < n && intervals[i][0] <= newInterval[1]  ){
        // we need to eliminate overlapping intervals 
        // so 
        newInterval[0] = min(newInterval[0] , intervals[i][0]);
        newInterval[1] = max(newInterval[1] , intervals[i][1]);
        i++;
    }
    // now we need to push this interval inside ans 
    ans.push_back(newInterval);

    // case 3
    // now push the rest 
    while(i < n){
        ans.push_back(intervals[i]);
        i++;
    }
    return ans;
}



int main()
{
    return 0;
}