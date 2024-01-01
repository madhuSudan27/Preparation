#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
/* 
Given a number A, find all factors of A.


Problem Constraints
1 <= A <= 109


Input Format
The first argument is an integer A.
 */

vector<int>solution(int A){
    // time complexity n /2
    
    int n = A/2 ;
    vector<int>ans;
    for( int i = 1 ; i <= n;i++){
        if(A % i == 0){
            ans.push_back(i);
        }
    }
    ans.push_back(A);
    return ans;
    
}
vector<int> solutionOptimized(int A){
    if( A == 1) return {1};
    vector<int>ans;
    
    for(int index = 1; index * index <= A; index ++){
        
        if(A % index == 0){
            // then there nums be two possible ans 
            // one is index and other one is A/index;
            
            // but if number is complete square then we have this case 
            if(A / index == index){
                ans.push_back(index);
            }
            else {
                ans.push_back(index);
                ans.push_back(A / index);
            }
            
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

vector<int> Solution(int A) {
    return solutionOptimized(A);
}


int main()
{
    return 0;
}