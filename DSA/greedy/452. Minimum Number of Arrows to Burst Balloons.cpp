#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMinArrowShots(vector<vector<int>>& points) {
    int n = points.size();
    int arrow = 1;
    sort(points.begin(), points.end());
    int last = points[0][1]; // we can shoot till that point 
    for(int index = 1; index < n; index ++){
        if(points[index][0] > last){
            arrow ++;
            last = points[index][1];
        }
        else{
            last = min(last, points[index][1]);
        }
    }



    return arrow;
}

int main()
{
    return 0;
}