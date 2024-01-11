#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(vector<int>&arr , int B){

    int start = 0,end = arr.size()-1;

    // need to find num of element less than B
    int ans = 0;
    while(start <= end){
        int mid= start+ (end - start)/ 2;
        if( arr[mid] <= B){
            ans = mid + 1;
            start = mid +1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    // vector<int>arr= {1,2,3,4545,546,67,87,3565,457,768,33,45,23,7,45,54,454};
    vector<int>arr= {1,2,4,4,5};
    sort(arr.begin(), arr.end());
    int ans = solution(arr , 4);
    cout<<ans;
    return 0;
}