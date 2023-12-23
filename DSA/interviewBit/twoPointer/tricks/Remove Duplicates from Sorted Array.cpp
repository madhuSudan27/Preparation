#include<iostream>
#include<vector>
using namespace std;
/* 

 */

int removeDuplicates(vector<int> &arr) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = arr.size();
    if(n == 1) return 1;
    int j=0;
    for( int i =  1;i < n; i++){
        if(arr[j] != arr[i]){
            arr[++j] = arr[i];
        }
        
    }
    return j+1;
}
int main()
{
    return 0;
}