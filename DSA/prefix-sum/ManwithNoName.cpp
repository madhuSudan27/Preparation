#include<iostream>
#include<vector>
using namespace std;

#define ll long long



void solve(){
    ll n;
    cin>>n;
    vector<ll> nums(n, 0);
    
    for(ll index = 0; index < n; index ++){
        cin>> nums[index];
    }
    ll prev = 0;
    for(int index = 0;index < n; index ++){
        if(nums[index] == -1){
            int val=((index > 0 )? prev / (index) : 0);
            nums[index] = val; 
        }
        prev += nums[index];
    }
    
  
    for(int index = 0; index < n; index ++){
        cout<< nums[index] <<" ";
    }
    cout<<endl;


}

int main(){   
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    

    return 0;
}




	
	

	
	
		