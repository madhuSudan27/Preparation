#include<iostream>
#include<vector>
using namespace std;

// scanning algorithm 




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n , p;
    cin>> n >> p;
    vector<int>helper(p+2 , 0);
    
    for(int index = 0; index < n; index ++){
        int xi, ri;
        cin >> xi >> ri;
        int start = max(0, xi - ri);
        int end = min( xi + ri , p);
        helper[start] ++ ;
        helper[end + 1] --;
    }
    
    for(int index = 1; index <= p; index ++){
        helper[index] = helper[index - 1] + helper[index];
    }

    int maxDark = 0;
    int currDark = 0;
    for(int index = 0; index <= p; index ++){
        if(helper[index] == 1){
            maxDark = max(maxDark, currDark);
            currDark = 0;
        }
        else{
            currDark ++;
        }
        
    }
    maxDark = max(maxDark , currDark);
    
    cout<< maxDark << endl;
    return 0;
}