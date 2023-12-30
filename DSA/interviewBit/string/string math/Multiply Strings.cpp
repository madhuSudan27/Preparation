#include<iostream>
#include<vector>
#include<string>
using namespace std;

/* 
Given two numbers represented as strings, return the multiplication of the numbers as a string.
Note: The numbers can be arbitrarily large and are non-negative.
Your answer should not have leading zeroes. For example, 00 is not a valid answer.
DO NOT USE BIG INTEGER LIBRARIES ( WHICH ARE AVAILABLE IN JAVA / PYTHON ). 
We will retroactively disqualify such submissions and the submissions will incur penalties.
*/

string multiply(string num1 ,string num2) {
    int n = num1.size() , m = num2.size();
        vector<int>arr(n+m);
        if(n == 1 && num1[0] == '0') return "0";
        if(m == 1 && num2[0] == '0') return "0";

        for( int i = n - 1;i >= 0 ;i --){
            for(int j = m - 1; j >= 0;j --){
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int index = i + j, nextIndex = i + j + 1;
                int sum = mul + arr[nextIndex];

                arr[index] += sum / 10;
                arr[ nextIndex] = sum % 10;
            }
        }
        // now i have array as my final ans 
        // need to convert in to string 
        string ans = "";
        int i = 0;
        while( i < (n+m) && arr[i] == 0) i++;
        while( i < (n + m)){
            ans.push_back(arr[i] + '0');
            i++;
        }
        return ans;
}

int main()
{
    return 0;
}