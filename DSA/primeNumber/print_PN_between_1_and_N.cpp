#include<iostream>
#include<vector>
using namespace std;

void build(int n, vector<int>& arr){
    for(int index = 2; index * index <= n; index ++){
        if(!arr[index]){
            for(int index1 = index * index ; index1 <= n; index1 += index){
                if(!arr[index1])
                    arr[index1] = 1;
            }
        }
        
    }
}

int main(){
    int n;
    cin >> n;
    vector<int>sieve(n+1 , 0);
    build(n , sieve);

    for(int index = 1; index <= n; index ++){
        if(!sieve[index]){
            cout<< index << endl;
        }
    }
    

    return 0;
}