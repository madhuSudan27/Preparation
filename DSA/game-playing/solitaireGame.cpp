#include<iostream>
#include<vector>
using namespace std;

int findMin(int a, int b, int c){
    return min(a, min(b,c));
}
int findMax(int a, int b, int c){
    return max(a, max(b, c));
}

int main(){
    int a, b, c;

    cin>>a>>b>>c;
    int count = 0;
    while((a > 0 && b > 0 && c > 0)){
        int mini = findMin(a, b, c);
        int maxi = findMax(a, b, c);

        if(a == maxi) a--;
        else if( b == maxi) b--;
        else  c--;


        if(a == mini) a--;
        else if( b == mini) b--;
        else c--;

        count ++;

    }

    cout<< count <<endl;
    return 0;
}