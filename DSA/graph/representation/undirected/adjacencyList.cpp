#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter number of Vertices" <<endl;
    int vertices;
    cin>> vertices;

    cout<<"Enter number of Edge" <<endl;
    int edge;
    cin >> edge;

    vector<vector<int>>graph(vertices + 1,vector<int>());

    cout<< "Enter the relation between edges"<<endl;
    for(int i = 0; i < edge ; i++){
        int node1, node2;
        cin>> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }

    cout<<"The graph is: "<<endl;
    for(auto it: graph){
        cout<<"-> ";
        for(auto i : it){
            cout<< i <<" ";
        }
        cout<< endl;
    }


    return 0;
}