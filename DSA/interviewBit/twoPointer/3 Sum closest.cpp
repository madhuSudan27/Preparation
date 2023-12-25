#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int threeSumClosest(vector<int> &arr , int B) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    long long  diff = INT_MAX;
    int ans = 0;
    for(int i = 0;i < n; i++){
        
        int low = i + 1, high = n-1;
        
        while( low < high){
            // now i have to find the three sum 
            long long sum = arr[i] + arr[low] + arr[high];
            cout<<"sum" << sum <<" ";
            if(abs(sum - B) < diff){
                diff = abs(sum - B);
                cout<<diff<<endl;
                ans = sum;
            }
            
            if( sum > B) high --;
            else low ++;
            
            
        }
    }
    return ans;
    
}

int main()
{
    // please take the data type as long instead of int 
    return 0;
}