#include<iostream>
#include<vector>
using namespace std;

/* 

You are playing a game involving a circular array of non-zero integers nums. Each nums[i] denotes the number of indices forward/backward you must move if you are located at index i:

If nums[i] is positive, move nums[i] steps forward, and
If nums[i] is negative, move nums[i] steps backward.
Since the array is circular, you may assume that moving forward from the last element puts you on the first element, and moving backwards from the first element puts you on the last element.

A cycle in the array consists of a sequence of indices seq of length k where:

Following the movement rules above results in the repeating index sequence seq[0] -> seq[1] -> ... -> seq[k - 1] -> seq[0] -> ...
Every nums[seq[j]] is either all positive or all negative.
k > 1
Return true if there is a cycle in nums, or false otherwise.
 */
int findNextIndex(vector<int>&arr, int currentIndex, bool direction){
    int currentDirection = arr[currentIndex] > 0;
    if(currentDirection != direction) return -1;

    int nextIndex = (currentIndex + arr[currentIndex]) % (int)arr.size();
    if(nextIndex < 0) nextIndex += arr.size();

    // now need to check for self loop 
    if(nextIndex == currentIndex) return -1;

    return nextIndex;

}
bool circularArrayLoop(vector<int>& nums) {

    // lets built the algorithm 
    int n = nums.size();
    for( int i = 0; i < n;i++){
        int slow = i, fast =  i;
        // the sequence should be all +ve or -ve 
        // so if direction changes no need to move further

        bool direction = nums[i] > 0;
        do{
            slow = findNextIndex(nums , slow , direction);
            fast = findNextIndex(nums , fast , direction);
            // check if any change in direction or self loop dont move 
            if(fast != -1){
                fast = findNextIndex(nums, fast , direction);
            }
            

        }while( slow != fast && slow != -1 && fast != -1);

        if(slow != -1 && slow == fast) return 1;
    }

    return 0;
}
int main()
{
    return 0;
}