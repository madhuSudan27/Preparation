#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int>&arr){
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;
}

vector<int> wiggleSort(vector<int>&nums){
    // nums[0] <= nums[1] >= nums[2] <= nums[3]....  <- based on this condition 
    // one soluton is to sort the array and build the ans;
    int n =nums.size();
    if(n == 1) return nums;
    vector<int>ans;
    sort(nums.begin(), nums.end());
    int low = 0, high = n-1 ;
    while( low <= high){
        if(low == high){
            ans.push_back(nums[low]);
            low++;
        }else{
            ans.push_back(nums[low ++]);
            ans.push_back(nums[high --]);
        }
    }
    return ans;

}

vector<int>optimizedWiggleSort(vector<int>nums){
    int n = nums.size();
    if(n == 1) return nums;
    // OBSERVATION 
    // if( index is odd then i have to check nums[i] >= nums[i - 1]) yes! dont do anything 
    // if(index is even then i have to check nums[i] <= nums[i - 1]) yes! dont do anything 
    // other wise need to swap 

    for(int i = 1; i < n; i++){
        if(i % 2 != 0 && nums[i] >= nums[i - 1] ) continue;
        else if(i % 2 == 0 && nums[i] <= nums[i - 1] ) continue;
        else{
            swap(nums[i], nums[i - 1]);
        }
    }
    return nums;

    
}
int main(){
    vector<int>arr= {3,5,2,1,6,4};
    vector<int>ans= optimizedWiggleSort(arr);
    cout<<"Ram";
    print(ans);
    return 0;
}