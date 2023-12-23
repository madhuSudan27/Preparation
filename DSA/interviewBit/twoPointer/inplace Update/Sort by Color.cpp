#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int> & arr) {
    int n = arr.size();
    
    int start = 0, mid = 0, end = n-1;
    while(mid <= end){
        if(arr[mid] == 1) mid ++;
        else if(arr[mid] == 0){
            swap(arr[mid], arr[start]);
            start ++;
            mid ++;
        }
        else swap(arr[mid], arr[end--]);
    }
    
   
}

int main()
{
    return 0;
}