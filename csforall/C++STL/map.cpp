#include<iostream>
#include<map>
using namespace std;
int main()
{
    // key value pair 
    // unique key  <- key could be any thing 
    // also sorted 
    // sorted key not values 
    // supports lower_bound and upper_bound

    map<int,int>mp;
    mp[2] = 10;
    mp.insert({2,3});
    

    map< pair<int,int>, int>mp1;
    return 0;
}