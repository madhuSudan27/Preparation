#include<iostream>
#include<vector>
using namespace std;

pair<int,int>findIndex( vector<int>& arr, int B){
    int countZero = 0;
    pair<int, int> index;
    int maxLength = 0, i = 0, j = 0, n = arr.size();
    
    
    while(j < n){
        if(arr[j] == 0) countZero ++;
        while(countZero > B && i < n){
            if(arr[i] == 0){
                countZero --;
            }
            i++;
        }
        int subArraySize = j - i + 1;
        if(maxLength < subArraySize){
            maxLength = subArraySize;
            index = {i , j};
        }
        j++;
    }
    return index;
    
    
}

vector<int> maxone(vector<int> &arr, int B) {
    // now problem boils down to find the indices in which the maximum 
    // continuous series of 1's is ocured 
    auto indices = findIndex(arr,B);
    vector<int> ans; 
   for(int i= indices.first ; i<= indices.second ;i++){
       ans.push_back(i);
   }
   return ans;
}
int main()
{
    return 0;
}