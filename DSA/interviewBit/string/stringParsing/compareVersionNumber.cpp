#include<iostream>
#include<vector>
#include<string>
using namespace std;

int Solution(string version1, string version2) {
    
    int n = version1.size();
    int m = version2.size();
    
    int start1 = 0 , start2 = 0;

    // try to solve using substring method 
    // read the substring till . 
    // then try to check and form the ans;

    while( start1 < n && start2 < m){

        // need to firstly find the .
        int i = start1 , j = start2;

        while( start1 < n && version1[start1] != '.') start1 ++;
        while ( start2 < m && version2[start2] != '.') start2 ++;

        string version1Substring = version1.substr(i , start1 - i);
        string version2Substring = version2.substr(j , start2 - j);

        // now i have the string 

        int size1 = version1Substring.size(); 
        int size2 = version2Substring.size();
        int  ni = 0, nj = 0;
        // remove all the leading zero 
        while(ni < size1  && version1Substring[ni] =='0') ni ++;
        while( nj < size2 && version2Substring[nj] == '0') nj ++;
        // after removal of leading zero  check the size 

        if((size1 - ni ) < (size2 - nj)){
            return -1;
        }
        else if( (size1 - ni ) > (size2 - nj)) return 1;

        // other wise both have same size 
        // now need to compare both 

        // case 1 match( both substring have same value) 
        while(ni < size1 && nj < size2 && version1Substring[ni] ==version2Substring[nj]){
            ni ++;
            nj ++;
        }
        // case2 (not same value)
            //case 2.1 both substring in range  
            // case 2.2 either of one in range 
        if(ni < size1 && nj < size2){
            return (version1Substring[ni] > version2Substring[nj]) ? 1 : -1;
        }
        else if (ni < size1 && nj > size2) return 1;
        else if (ni > size1 && nj < size2) return -1;



       // my start1 and start2 is pointing at '.' so need to move 
       start1 ++;
       start2 ++;
        
    } 
    // now either of them is within the range so need to check for that also

     if( start1 < n){
        while( start1 < n && version1[start1] =='0') start1 ++;
        if( start1 < n) return 1;
     }
     else if( start2 < m ){
        while( start2 < m && version2[start2] == '0') start2 ++;
        if( start2 < m) return -1;
     }
    
    return 0;
    
}
 

int main(){

    string A = "4444371174137455";
    string B = "5.168";
    cout<< Solution(A, B);

    string v1 ="1282.000345.00235"; 
    string v2 ="128.000345.236";

    cout<< Solution(v1, v2);
    return 0;
}