#include<iostream>
#include<set>
using namespace std;

// everything it stores in sorted order and unique element only 

int main()
{
    set<int>st;

    st.insert(10);
    st.emplace(10);

    auto it = st.find(10); // <- returns an iterator which points to 10
    // if an element is not present then iterator will always returns st.end();


    st.erase(10); // <- deletes 10 and maintain its sorted order  and takes logarithmic time 

    st.erase(it); // <- it takes constant time 
    // we can also erase in a range 
    // ex:-  st.erase(it, it1);

    int cnt = st.count(10); // if present will give 1 else 0

    // it has also 
    // upper_bound() and lower_bound();

    return 0;
}