#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// check the upper bound code simmilar approach slight change 

int main(){
    vector<int>arr={1,2,3,4,5,5,6,7,8,8,9};
    int index=upper_bound(arr.begin(),arr.end(),5)-arr.begin();
    cout<<index;
}