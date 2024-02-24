#include<iostream>
#include<vector>
using namespace std;

long long nthEvenTerm(long long n){
    // common diff is 2 for even
    return 2 +(n-1)*2;
}
long long nthOddTerm(long long n){
    // common diff is 2 for odd
    return 1 +(n-1)*2;
}

int main(){
    long long n, m;
    cin >> n >> m;
    if(m <= (n+1)/2){
        cout<<nthOddTerm(m)<<endl;
    }
    else {
        cout<<nthEvenTerm(m - (n+1)/2)<<endl;
    }

    return 0;
}