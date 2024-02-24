#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int singleSingleRideCost(int n ,int a){
    // case 1
    return n * a;
}
int combinedRideCost(int n, int m  ,int a , int b){
    // will handle case 2 (combined ticket )
                // case2.a 
                // case2.b
    // it will also handle case 3 (buy special ticket only )

   return (n / m) * b + min((n % m) * a , b);

}

int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int corner =INT_MAX;
    if( n < m){
        corner = b;
    }


    

    cout<<min(singleSingleRideCost(n , a), min(combinedRideCost(n,m, a, b), corner))<<endl;

    return 0;
}