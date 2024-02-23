#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;

    bool chance = 0;
    while(true){
        if(n == 0 || m == 0){
            if(!chance) cout<<"Malvika"<<endl;
            else cout<< "Akshat"<<endl;
            return 0;
        }
        if(!chance){
            chance = 1;
        }
        else{
            chance = 0;
        }
        n --;
        m --;
    }
    return 0;
}