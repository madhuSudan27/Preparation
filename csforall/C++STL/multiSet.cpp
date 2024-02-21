#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int>ms;
    // it contains duplicate entries but it is sorted like SET

    // if
        ms.erase(1) ; // <- then it will erase all 1 occurrence  

    int cnt = ms.count(10);

    // how we can delete only one element 
    ms.erase(ms.find(1)); // <- only single element is deleted 

    // similarly we can erase some values rangle 
    ms.erase(ms.find(1), ms.find(10));// <- will erase all the element between 1 ans 10 

    return 0;
}