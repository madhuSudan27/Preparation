#include<iostream>
#include<vector>
using namespace std;

/* 
You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

 

Example 1:

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true
Example 2:

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false
 

Constraints:

1 <= flowerbed.length <= 2 * 104
flowerbed[i] is 0 or 1.
There are no two adjacent flowers in flowerbed.
0 <= n <= flowerbed.length
 */

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int m = flowerbed.size();
    if(m == 1  && flowerbed[0] == 0) return n<= 1;

    // we need to handle the first explicitelly 
    if(flowerbed[0] == 0 && flowerbed[1] == 0){
        // we can place a flower at 0th location 
        n --;
        flowerbed[0] = 1;
    }
    // other wise we cant plant a flower at 0th or 1st position 

    // now lets Plant from index 2;

    for(int index = 2; index < m ;index ++){
        // need to check and plant 
        if(index+1 < m){
            if(flowerbed[index - 1] == 0 && flowerbed[index] == 0 && flowerbed[index +1] == 0){
                flowerbed[index] = 1;
                n--;
            }
        }
        // we need to check explicitly for the last elememt 
        if(index == m-1){
            if(flowerbed[index] == 0 && flowerbed[index - 1] == 0){
                n --;
            }
        } 

    }

    return n <= 0;
    
}
int main()
{
    return 0;
}