#include<iostream>
#include<vector>
using namespace std;

/* 
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
On each move, you may increase the value of any element by one. What is the minimum number of moves required?
Input
The first input line contains an integer n: the size of the array.
Then, the second line contains n integers x1,x2,...,xn: the contents of the array.
Output
Print the minimum number of moves.
Constraints


Example
Input:
5
3 2 5 1 7

Output:
5
 */

int main(){

    int n ;
    cin >> n;
    vector<int>arr(n, 0);

    for(int i = 0; i< n; i++){
        cin>> arr[i];
    }
    long long  prev = arr[0];
    long long  ans = 0;
    for(int index = 1; index < n; index ++){
        if(arr[index] > prev){
            prev = arr[index];
        }
        else{
            // i have to increase 
            int diff = prev - arr[index];
            ans += diff;
            prev = arr[index] + diff; 
        }
    }
    cout<< ans<<endl;
    return 0;
}