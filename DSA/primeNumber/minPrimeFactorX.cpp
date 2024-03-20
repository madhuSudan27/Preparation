#include<iostream>
#include<vector>
using namespace std;

// the last range is 10^ 6;
// and we have to count the number  in range 1 to 10^ 6  with minimum prime factor as X
// for example  min prime factor of
// 2 -> 2
// 3-> 3
// 4 -> 2
// 5-> 5
// 10 -> 2

int limit = 1000001;
vector<int>sieve(limit, 0);

vector<int>count(limit, 1); 

void build(){
    for(int index = 2; index * index <= limit - 1 ; index ++){
        for(int index2 = index * index ; index2 <= limit - 1 ; index2 += index){
            if(sieve[index2] == 0){
                sieve[index2] = 1;
                count[index] = count[index] + 1;
            }
        }
    }
}

int main(){
    build();
    cout<< "Enter the number of Test cases" << endl;
    int T;
    cin>> T;
    while(T --){
        int prime;
        cin >> prime ;
        cout<< count[prime];
    }
    return 0;
}