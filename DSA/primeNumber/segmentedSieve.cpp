#include<iostream>
#include<vector>
using namespace std;

vector<int>findPrime(int right){
    vector<int>primeSieve(100005, 0);

    for(int index = 2; index * index <= 100004; index ++){
        if(primeSieve[index] == 0){
            for(int multiple = index * index; multiple <= 100004; multiple += index){
                if(primeSieve[multiple] == 0)
                    primeSieve[multiple] = 1;
            }
        }
    }

    vector<int>ans;
    for(int index = 2; index * index <= right ; index ++){
        if(primeSieve[index] == 0) ans.push_back(index);
    }

    return ans;
}

int main(){
    int left, right;
    cin>> left >> right;

    vector<int>primes = findPrime(right);
    vector<int>helper(right - left + 1, 0);
    for(int index = 0; index < primes.size(); index ++){
        int firstNumber;
        if(left % firstNumber == 0){
            firstNumber = left;
        }
        else{
            firstNumber = ((left / primes[index] ) * primes[index] )+ primes[index];
        }
        for(int mark = firstNumber ; mark <= right ; mark += primes[index]){
            if(helper[mark - firstNumber] == 0){
                helper[mark - firstNumber] = 1;
            }
        }
    }
    for(int index = 0; index < helper.size(); index ++){
        if(helper[index] == 0){
            cout<< index + left << " ";
        }
    }
    return 0;
}