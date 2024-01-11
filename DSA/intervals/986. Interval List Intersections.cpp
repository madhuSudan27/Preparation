#include<iostream>
#include<vector>
using namespace std;

/* 
You are given two lists of closed intervals, firstList and secondList, where firstList[i] = [starti, endi] and secondList[j] = [startj, endj]. Each list of intervals is pairwise disjoint and in sorted order.

Return the intersection of these two interval lists.

A closed interval [a, b] (with a <= b) denotes the set of real numbers x with a <= x <= b.

The intersection of two closed intervals is a set of real numbers that are either empty or represented as a closed interval. For example, the intersection of [1, 3] and [2, 4] is [2, 3]
 */

vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
    vector<vector<int>> ans;
    int n = firstList.size();
    int m = secondList.size();
    int start1 = 0, start2 = 0;

    while(start1 < n && start2 < m){
        // check if overlaps 
        if(firstList[start1][1] >= secondList[start2][0]  && firstList[start1][0] <= secondList[start2][1]){
            int newFirst= max(firstList[start1][0], secondList[start2][0]);
            int newSecond= min(firstList[start1][1], secondList[start2][1]);
            ans.push_back({newFirst, newSecond});
        }
        if(firstList[start1][1] < secondList[start2][1]){
            start1++;
        }
        else{
            start2++;
        }
    }
    return ans;


    
}
int main()
{
    return 0;
}