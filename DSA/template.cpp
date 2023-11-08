#include <iostream>
using namespace std;

// template declearation in c++
//template<typename T>// we can use it for simmiilar type of data only 


// for two different type of data   i can also use it for tryplate 
template<typename T ,typename V>

class Pair{
    T X;
    V Y;
    
    public:
        void setx(T x){
            this->X=x;
        }
        void sety(V y){
            this->Y=y;
        }
        T getx(){
            return X;
        }
        V gety(){
            return Y;
        }
};


int main() {
	// your code goes here
	 
	 
	 /*
	 Pair<int> p1;
	 p1.setx(10);
	 p1.sety(20);
	 cout<<p1.getx()<<endl;
	 cout<<p1.gety();
	 
	 */
	 
	 /*
	 
	 Pair<double , int > p1;
	 p1.setx(100.32435);
	 p1.sety(10.778166);
	 
	 cout<<p1.getx()<<endl;
	 cout<<p1.gety()<<endl;
	 
	 Pair<char,int> p2;
	 p2.setx('a');
	 p2.sety(10);
	 cout<<p2.getx()<<endl;
	 cout<<p2.gety();
	 
	 
	 */
	 /*
	Pair<Pair<int,double>,char > p1;
	
	
	Pair<int,double> p2;
	 
	p2.setx(10);
	p2.sety(100.97);
	p1.setx(p2);
	p1.sety('a');
	 
	cout<<p1.getx().getx()<<" "<<p1.getx().gety()<<" "<<p1.gety()<<endl;
	*/
	
	Pair<int,Pair<double,char>> p5;
	Pair<double,char> p6;
	p6.setx(2000.0765);
	p6.sety('A');
	p5.setx(99);
	p5.sety(p6);
	cout<<p5.getx()<<" "<<p5.gety().getx()<<" "<<p5.gety().gety()<<endl;
	

	return 0;
}