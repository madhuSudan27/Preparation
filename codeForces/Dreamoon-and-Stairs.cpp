#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    if( n < m){
        cout<< -1;
        return 0;
    }
    else{
        int minSteps = 0;
        if(n % 2 == 0) minSteps = n/2;
        else minSteps = (n/2) + 1;
        while(minSteps % m != 0){
            minSteps ++;
        }
        cout<< minSteps<<endl;
    }
    return 0;
}