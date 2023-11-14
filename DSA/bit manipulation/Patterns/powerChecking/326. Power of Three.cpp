#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n==0) return 0;
       while(n%3==0){
           n/=3;
       }
       return n==1;
    }
};

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1){
            return 1;
        }
        if(n==0|| n%3!=0){
            return 0;
        }
        return isPowerOfThree(n/3);
    }
};