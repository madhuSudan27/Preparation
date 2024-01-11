#include<iostream>
#include<vector>
#include<queue>
using namespace std;
/* 

Given a list of intervals representing the start and end time of ‘N’ meetings, find the minimum number of rooms required to hold all the meetings.

Example 1:

Meetings: [[1,4], [2,5], [7,9]]
Output: 2
Explanation: Since [1,4] and [2,5] overlap, we need two rooms to hold these two meetings. [7,9] can occur in any of the two rooms later.

 */

class Meeting {
public:
  int start = 0;
  int end = 0;

  Meeting(int start, int end) {
    this->start = start;
    this->end = end;
  }
};

class Solution {
public:

  int findMinimumMeetingRooms(vector<Meeting> &meetings) {
    int minRooms = 0;
    // TODO: Write your code here
    int n = meetings.size();
    priority_queue<int, vector<int>, greater<int> > pq;
    sort(meetings.begin(), meetings.end());

    for(auto it: meetings){
      while(!pq.empty() && pq.top() <= it.start){
        pq.pop();
      }
      pq.push(it.end);
      if(pq.size() > minRooms) minRooms = pq.size();
    }
    return minRooms;
  }
};


int main()
{
    return 0;
}