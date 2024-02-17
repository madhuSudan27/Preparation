#include<iostream>
#include<vector>
#include<queue>
using namespace std;

/* 
You are given an integer array heights representing the heights of buildings, some bricks, and some ladders.

You start your journey from building 0 and move to the next building by possibly using bricks or ladders.

While moving from building i to building i+1 (0-indexed),

If the current building's height is greater than or equal to the next building's height, you do not need a ladder or bricks.
If the current building's height is less than the next building's height, you can either use one ladder or (h[i+1] - h[i]) bricks.
Return the furthest building index (0-indexed) you can reach if you use the given ladders and bricks optimally.

 */


 int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
    int len = heights.size();
    int usedBricks = 0;
    priority_queue<int>pq;
    int index = 1;

    // idea is <- if i already used bricks(size) is > diff and we have to use ladder then use 
    // ladder insted ans utilize bricks for next use 


    for(; index < len ; index ++){
        int diff = (heights[index] - heights[index - 1]);
        // next house is smaller dont do any thing <- just jump
        if(diff < 0) continue; 
        if(usedBricks + diff <= bricks){
            usedBricks += diff;
            // maximum we used 
            pq.push(diff);
        }
        else if(ladders > 0){
            // we have to use optimally 
            if(!pq.empty() && pq.top() > diff){
                // need to update the used bricks 
                usedBricks = usedBricks - pq.top() + diff;
                pq.pop();
                pq.push(diff);
            }
            ladders --;

        }
        else break;
    }
    return index -1;
    
}


int main()
{
    return 0;
}