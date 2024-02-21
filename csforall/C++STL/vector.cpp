#include<iostream>
#include<vector>
#include<list>
using namespace std;


// void type function <- does not retuns any thing
void print(){
    cout<<"Anand";
}

// return type function 
int sum(int a, int b){
    return a + b;
}

// -------------- c++ STL
// Algorithms 
// Containers
// functions
// iterators

int main()
{
    pair<int, int> firstPair = {1,2};
    pair<int,pair<int,int>> secondPair = {1,{2,3}};
    // similarly we can chain

    vector<int>v;
    v.push_back(1); // pushing one element
    v.emplace_back(2); // similar to push_back
    // emplace_back is faster than push_back

    vector<int>container(10, 1000); //<- size 10 
    vector<int>container1(5); //<- may be zero or may be garbage

    vector<int> :: iterator it = v.begin();
    cout<<*(it)<<endl; 
    it = it + 2; // some garbage value 
    cout<<*(it)<<endl;

    vector<int> :: iterator it1 = v.end();
    // rend(); <- reverse end 
    // rbegin(); <- reverse end 

    for(vector<int>:: iterator it = container.begin() ; it!= container.end(); it++){
        cout<<*(it)<<endl;
    }
    for(auto it = container1.begin(); it != container1.end(); it++){
        cout<<*(it)<<endl;
    }

    container.erase(container.begin() + 1);

    // delete in between 2 and 4 <- 4 is exclusive 
    container.erase(container.begin() + 2 , container.begin() + 4);

    // insert two element at index 2 and 3 
    container.insert(container.begin() + 1, 2 , 2000);


    // list 
     list<int>ls;// <-- internally doubly linked list is maintained

     // here we have push front <- chipper operation w.r.to  vector

     ls.push_front(10);
     ls.emplace_back(30);
     ls.emplace_front(40); 
     ls.pop_front();
     ls.pop_back();








    return 0;
}