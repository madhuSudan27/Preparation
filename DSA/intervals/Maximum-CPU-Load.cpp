#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

/* 
Problem Statement
We are given a list of Jobs. Each job has a Start time, an End time, and a CPU load when it is running. Our goal is to find the maximum CPU load at any time if all the jobs are running on the same machine.

Example 1:

Jobs: [[1,4,3], [2,5,4], [7,9,6]]
Output: 7
Explanation: Since [1,4,3] and [2,5,4] overlap, their maximum CPU load (3+4=7) will be when both the jobs are running at the same time i.e., during the time interval (2,4).
Example 2:

Jobs: [[6,7,10], [2,4,11], [8,12,15]]
Output: 15
Explanation: None of the jobs overlap, therefore we will take the maximum load of any job which is 15.
Example 3:

Jobs: [[1,4,2], [2,4,1], [3,6,5]]
Output: 8
Explanation: Maximum CPU load will be 8 as all jobs overlap during the time interval [3,4].
 */

class Job {
public:
  int start = 0;
  int end = 0;
  int cpuLoad = 0;

  Job(int start, int end, int cpuLoad) {
    this->start = start;
    this->end = end;
    this->cpuLoad = cpuLoad;
  }
};

class Solution {
public:
  int findMaxCPULoad(vector<Job> &jobs) {
    int maxCPULoad = 0;
    // TODO: Write your code here
    sort(jobs.begin(), jobs.end());
    priority_queue<pair<int,int> , vector<pair<int, int>> , greater<pair<int, int>> > pq;

    for(auto it : jobs){
      int load = 0;
      while(!pq.empty() && pq.top().first <= it.start){
        load += pq.top().second;
        pq.pop();
      }
      if(load > maxCPULoad) maxCPULoad = load;
      pq.push({it.end , it.cpuLoad});
    }
    // need to check at last if suppose all jobs are seduled at same time 
    int load = 0;
    while(!pq.empty()){
      load += pq.top().second;
      pq.pop();
    }
    if(load > maxCPULoad) maxCPULoad = load;
  
    return maxCPULoad;
  }
};
int main()
{
    
}