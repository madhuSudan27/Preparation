#include<iostream>
#include<vector>
#include<set>
using namespace std;

set<pair<int,string>>s;
int main()
{
    s.insert({23,"madhu"});
    s.insert({23,"madhs"});
    // will store lexicographically sortedd order 

    for(auto it: s){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}