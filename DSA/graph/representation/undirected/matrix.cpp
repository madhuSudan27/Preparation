#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<< "enter the number of node(Vertices) in graph"<<endl;
    int vertices ;
    cin>> vertices;

    // 2D MATRIX TO STORE 
    vector<vector<int>>graph(vertices + 1 , vector<int>(vertices + 1,0));

    cout<< "Enter the Number of Edge in graph"<<endl;
    int edge ;
    cin>> edge;

    cout<< "Enter the relation between vertices"<<endl;
    for(int index = 0; index < edge ; index ++){
        int node1, node2;
        cin>> node1 >> node2;
        graph[node1][node2] = 1;
        graph[node2][node1] = 1;
    }

    cout<<"Graph looks like: "<<endl;

    for(int row = 0; row <= vertices ; row ++){
        for(int col = 0; col <= vertices ; col ++){
            cout<< graph[row][col]<<" ";
        }
        cout<< endl;
    }




    return 0;
}