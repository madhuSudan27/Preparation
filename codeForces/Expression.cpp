#include<iostream>
#include<vector>
using namespace std;
// for each one we have 2 combination 

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int exp1 = (a + b) * c;
    int exp2 = a + (b * c); 
    int exp3 = (a * b) + c;
    int exp4 = a * (b + c);
    int exp5 = a + b + c;
    int exp6 = a * b * c;
    cout<< max(exp1 , max(exp2 , max(exp3 , max(exp4 , max(exp5 , exp6)))));
    return 0;
}