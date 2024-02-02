#include<iostream>
#include<vector>
#include<string>
using namespace std;
/* 
An integer has sequential digits if and only if each digit in the number is one more than the previous digit.

Return a sorted list of all the integers in the range [low, high] inclusive that have sequential digits.

 

Example 1:

Input: low = 100, high = 300
Output: [123,234]
Example 2:

Input: low = 1000, high = 13000
Output: [1234,2345,3456,4567,5678,6789,12345]
 

Constraints:

10 <= low <= high <= 10^9
 */

int numberLength(int number){
    int count = 0;
    while(number > 0){
        count ++;
        number/=10;
    }
    return count ;
}
vector<int> sequentialDigits(int low, int high) {

    string numbers = "123456789";
    int lowLength = numberLength(low);
    int highLength = numberLength(high);
    vector<int>ans;
    
    while(lowLength <= highLength){
        for(int i = 0; i <= (9 - lowLength) ; i++){
            int potentialAns = stoi(numbers.substr(i,lowLength));
            if(potentialAns >= low && potentialAns <= high){
                ans.push_back(potentialAns);
            }
        }
        lowLength ++;
    }



    return ans;
}
int main()
{
    return 0;
}