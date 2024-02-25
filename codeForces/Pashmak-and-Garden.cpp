#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x1,y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    // handle the case if diagonal 
    // check we can form a valid square or not 
    if(x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2)){
        cout<< -1;
    }
    else if (x1 == x2)
        cout << x1 + abs(y1 - y2) << " " << y1 << " " << x2 + abs(y1 - y2) << " " << y2 << endl;
    else if (y1 == y2)
        cout << x1 << " " << y1 + abs(x1 - x2) << " " << x2 << " " << y2 + abs(x1 - x2) << endl;
    else
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
    return 0;
}