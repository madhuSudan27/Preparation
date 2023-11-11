#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

class Solution {
public:
    
    int distance(int x, int y, int x1, int y1){
        return sqrt(pow(x-x1,2)+pow(y-y1,2));
    }
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx && sy==fy ){
            if(t==1) return 0;
            return 1;
        }
        
        int dis=max(abs(sx-fx),abs(sy-fy));
        return dis<=t;
    }
};