#include<iostream>
#include<vector>
using namespace std;

int solution(int arr[][5]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(arr[i][j] == 1){
                
                return (abs(2 - i)+ abs(2 - j));
            }
        }
    }
    return -1;

}


int main(){
    int arr[5][5];
    for(int i = 0; i<5; i++){
        for(int j = 0 ; j < 5; j++){
            cin>>arr[i][j];
        }
    }
    cout<< solution(arr);

    return 0;
}