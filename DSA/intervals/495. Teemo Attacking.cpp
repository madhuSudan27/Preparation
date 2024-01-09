#include<iostream>
#include<vector>
using namespace std;

/* Our hero Teemo is attacking an enemy Ashe with poison attacks! When Teemo attacks Ashe, Ashe gets poisoned for a exactly duration seconds. More formally, an attack at second t will mean Ashe is poisoned during the inclusive time interval [t, t + duration - 1]. If Teemo attacks again before the poison effect ends, the timer for it is reset, and the poison effect will end duration seconds after the new attack.

You are given a non-decreasing integer array timeSeries, where timeSeries[i] denotes that Teemo attacks Ashe at second timeSeries[i], and an integer duration.

Return the total number of seconds that Ashe is poisoned.

 

Example 1:

Input: timeSeries = [1,4], duration = 2
Output: 4
Explanation: Teemo's attacks on Ashe go as follows:
- At second 1, Teemo attacks, and Ashe is poisoned for seconds 1 and 2.
- At second 4, Teemo attacks, and Ashe is poisoned for seconds 4 and 5.
Ashe is poisoned for seconds 1, 2, 4, and 5, which is 4 seconds in total. */

int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = 0;
        for(int i = 0 ; i < timeSeries.size() -1;i++){
            int poisonedTime = min(timeSeries[i+1] - timeSeries[i] , duration);
            ans += poisonedTime;
        }
        // for last element ex:- if last element = 4 then -> 4, 5 is the poisonedTime
        ans += duration;
        return ans;
    }

int main()
{
    return 0;
}