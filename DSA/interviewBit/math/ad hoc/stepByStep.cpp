#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int solution(int A , int pos, int move){
    if(pos == A) {
        return move;
    }
    if( pos <= INT_MIN || pos >= INT_MAX) return -1;
    cout<<pos<<" ";
    int foreward =solution( A , pos + move +1 , move + 1);
    int backward =solution(A , pos - (move +1) , move + 1 );
    return min(foreward , backward);
}

int main()
{
    cout<< solution(3,0,0);
    return 0;
}