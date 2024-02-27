#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;

string frequencySort(string s) {
    unordered_map<char, int >mp;
    for(auto it: s){
        mp[it] ++;
    }
    // now i need to deal with priority queue 

    priority_queue<pair<int,int>>pq;
    for(auto it: mp){
        pq.push({it.second , it.first});
    }
    string ans = "";
    while(!pq.empty()){
        pair<int, char> temp = pq.top();
        pq.pop();
        int count = temp.first;
        char character = temp.second;
        while(count >0){
            ans.push_back(character);
            count --;
        }
    }

    return ans;

}


int main()
{
    return 0;
}