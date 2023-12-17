#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class item{
    public: 
    int val;
    int priority;
};

item pri[10000];
int index=-1;

// simply insert ;
void enqueu(int val, int priority){
    index++;
    pri[index].val = val;
    pri[index].priority=priority;
}

// will find the peak element 
int peek(){

}



int main(){

    priority_queue<pair<int,string>>pq;

    pq.push({23,"anand"});
    pq.push({23, "mohan"});

    // also update to see  how it behaves 

    while(!pq.empty()){
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }
    
    return 0;
}