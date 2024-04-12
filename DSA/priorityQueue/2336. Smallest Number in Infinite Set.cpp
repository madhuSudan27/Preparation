#include<iostream>
#include<set>
#include<vector>
using namespace std;

class SmallestInfiniteSet {
public:
    set<int>s;
    int index = 0;
    SmallestInfiniteSet() {
        index = 1;
    }
    
    int popSmallest() {
        auto small = s.begin();
        int val = * small;
        if(val != 0 && val < index){
            s.erase(val);
            return val;
        }

        index ++;
        return index - 1;
    }
    
    void addBack(int num) {
        if(index > num && s.find(num)== s.end()){
            s.insert(num);
        }
    }
};


int main()
{
    return 0;
}