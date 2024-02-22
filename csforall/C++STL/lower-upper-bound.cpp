#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr = {1,4,4,4,5,5,6,6,6,6,7,10,11};
    // find the first occurrence of 6
    int index = lower_bound(arr.begin(), arr.end(), 6) - arr.begin();

    // find the first occurrence of 8
    int index1 = lower_bound(arr.begin(), arr.end(), 8) - arr.begin();
    // since 8 is not present so it will point to immediate next greater element other wise to the last 
    // in this case it will point to 10 <- index 11


    int index2 = lower_bound(arr.begin(), arr.end(), 18) - arr.begin(); // does not exist so it will point to n th index 

    cout<<index<<endl;
    cout<<index1<<endl;
    cout<<index2<<endl;

    int lastOccurrence = upper_bound(arr.begin(), arr.end(), 5) - arr.begin();
    // always returns next greater element index 

    // Q1 . find the smallest number greater than x ;
    // Q2. find the number just  smaller than x (immediate);

    return 0;
}