#include<iostream>
#include<vector>
using namespace std;


 string consvertIntToBinary(int num){
    string binary = "";
    for(int i = 31 ; i>= 0; i--){
        if(num & (1 << i)){
            binary.push_back('1');
        }
        else{
            binary.push_back('0');
        }
    }
    return binary;

}


string findPrefix(string left , string right){
    string prefix = "";
    int i  = 0;
    for(; i<= 31 ;i++){
        if(left[i] == right[i]){
            if(left[i] =='1'){
                prefix.push_back('1');
            }
            else{
                prefix.push_back('0');
            }
        }
        else{
            break;
        }
    }
    while( i<= 31){
        prefix.push_back('0');
        i++;
    }
    return prefix;
}

int convertBinaryToInteger(string binary){
    int integer = 0;
    for(int i = 31 ; i >= 0; i-- ){
        if(binary[i] == '1'){
            integer = integer + (pow(2,(31 - i)));
        }
    }
    return integer;
}
int rangeBitwiseAnd(int left, int right) {
    if(left == 0) return 0;

    string binaryOfLeft = consvertIntToBinary(left);
    string binaryOfRight = consvertIntToBinary(right);

    string commonPrefix = findPrefix(binaryOfLeft , binaryOfRight);
    int ans = convertBinaryToInteger(commonPrefix);
    

    return ans;
    
}

// a nice approach 

//     >>> Bitwise-AND of any two numbers will always produce a number less than or equal to the smaller number.
// so lets implement out function 

int solution(int left , int right){
    
    while(right > left){
        // we have to eliminate our right most bit 
        right = right &( right - 1);
    }

    return right & left; 
}

int main()
{
    return 0;
}