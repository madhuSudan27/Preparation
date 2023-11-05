
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int maxValue=max(arr[0],arr[1]);

        int count=1;
        if(k==1) return maxValue;
        for(int i=2;i<arr.size();i++){
            if(arr[i]>maxValue){
                maxValue=arr[i];
                count=1;
            }
            else{
                count++;
                if(count>=k) return maxValue;
            }
        }
        return maxValue;

        
    }
};