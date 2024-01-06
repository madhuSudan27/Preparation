#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

int highestScore(vector<vector<string> > &A) {
    unordered_map< string , pair<int,int> >mp;
    
    for(int i = 0 ; i< A.size();i++){
        // check does student exist 
       if(mp.find(A[i][0]) != mp.end()){
           pair< int,int > temp = mp[A[i][0]];
           mp[A[i][0]] = {(temp.first + stoi(A[i][1])) , temp.second + 1};
       } 
       else{
           mp[A[i][0]] = {stoi(A[i][1]) , 1};
       }
    }
    // now i have all the data in hash map 

    // now need to find average 
    int ans = 0;
    for( auto it : mp){
        int avg = (it.second.first ) / it.second.second;
        ans = max(ans , avg );
    }
    return ans;
}
int main()
{
    vector<vector<string>> arr = {{"Bob", "80"}, {"Bob", "90"}, {"Alice", "90"}};
    cout<<highestScore(arr);
    return 0;
}