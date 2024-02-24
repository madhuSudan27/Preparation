#include<iostream>
#include<vector>
using namespace std;
int main(){
    //  level 
    int n ;
    cin>> n;
    vector<int>levels(n + 1 , 0);
    int count1;
    cin>>count1;
    for(int i = 0 ; i< count1 ;i++){
        int a;
        cin>> a;
        levels[a] = 1;
    }
    int count2;
    cin>>count2;
    for(int i = 0 ; i< count2 ;i++){
        int a;
        cin>> a;
        levels[a] = 1;
    }

    for(int i = 1; i<= n ;i ++){
        if( !levels[i]){
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;
    
    return 0;
}