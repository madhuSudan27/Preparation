#include<iostream>
#include<vector>
using namespace std;

bool bruteForce(int num){
    if(num == 1) return 0;
    int count = 0;
    for(int index = 1; index <= num; index ++){
        if( num % index == 0){
            count ++;
        }
    }
    return count == 2;
}



bool optimized(int num){
    if(num == 1) return 0;
    int count = 0;
    for(int index = 1; index <= num/2; index++){
        if(num % index == 0){
            count ++;
        }
    }
    return count == 1;
}



bool optimal(int num){
    if(num == 1) return 0;
    int count = 0;
    for(int index = 1; index * index <= num; index ++){
        if(num % index == 0){
            if(index == num / index){ // this will only execute (or true) for perfect square 
                count ++;
            }
            count ++;
        }
    }
    return count == 1;
}


int main(){
    int n ;
    cin >> n;

    cout<< bruteForce(n)<<endl;
    cout<< optimized(n)<<endl;
    cout<< optimal(n)<<endl;

    return 0;
}