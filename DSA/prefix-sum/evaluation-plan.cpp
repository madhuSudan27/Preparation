#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* 

Flatland government is building a new highway that will be used to transport weapons from its main
weapon plant to the frontline in order to support the undergoing military operation against its neighbor
country Edgeland. Highway is a straight line and there are n construction teams working at some points
on it.
During last days the threat of a nuclear attack from Edgeland has significantly increased. Therefore
the construction office has decided to develop an evacuation plan for the construction teams in case
of a nuclear attack. There are m shelters located near the constructed highway. This evacuation plan
must assign each team to a shelter that it should use in case of an attack.
Each shelter entrance must be securely locked from the inside to prevent any damage to the shelter
itself. So, for each shelter there must be some team that goes to this shelter in case of an attack.
The office must also supply fuel to each team, so that it can drive to its assigned shelter in case of an
attack. The amount of fuel that is needed is proportional to the distance from the team’s location to
the assigned shelter. To minimize evacuation costs, the office would like to create a plan that minimizes
the total fuel needed.
Your task is to help them develop such a plan.
Input
The input file contains several test cases, each of them as described below.
The first line of the input file contains n — the number of construction teams (1 ≤ n ≤ 4000). The
second line contains n integer numbers - the locations of the teams. Each team’s location is a positive
integer not exceeding 10^9
, all team locations are different.
The third line of the input file contains m — the number of shelters (1 ≤ m ≤ n).
The fourth line contains m integer numbers — the locations of the shelters. Each shelter’s location
is a positive integer not exceeding 10^9, all shelter locations are different.
The amount of fuel that needs to be supplied to a team at location x that goes to a shelter at
location y is equal to |x − y|.

Output
For each test case, the output must follow the description below.
The first line of the output file must contain z — the total amount of fuel needed. The second
line must contain n integer numbers: for each team output the number of the shelter that it should be
assigned to. Shelters are numbered from 1 to m in the order they are listed in the input file.
Sample Input
3
1 2 3
2
2 10
Sample Output
8
1 1 2
*/

void solution(int n, vector<int>& consPoint, int m, vector<int>shelterPoint){

    sort(consPoint.begin(), consPoint.end());
    sort(shelterPoint.begin(), shelterPoint.end());
    // i have to make sure all consPoint have some shelter
    vector<int>shelter(n, 0);
    int fuelCost = 0; 
    int shelterIndex = 0;
    for(int index = 0; index < n; index ++){
        // now i have also assign shelters optimally 
        // we have two case 
        // if more shelter is there 
        if(shelterIndex + 1 < m){
            // have to choose optimally 
            if(abs(consPoint[index] - shelterPoint[shelterIndex]) < abs(consPoint[index] - shelterPoint[shelterIndex + 1]) && 
            ((n - index) >= (m - shelterIndex)) ){
                
                fuelCost += abs(consPoint[index] - shelterPoint[shelterIndex]);
                shelter[index] = shelterPoint[shelterIndex];
            }
            else{
                fuelCost += abs(consPoint[index] - shelterPoint[shelterIndex + 1]);
                shelter[index] = shelterPoint[shelterIndex + 1];
                shelterIndex ++;
                
            }
        }
        // if only one shelter left 
        else {
            // have only one option to just assign that shelter 
            fuelCost += abs(consPoint[index] - shelterPoint[shelterIndex]);
            shelter[index] = shelterPoint[shelterIndex];

        }
    }

    cout<< fuelCost<<endl;
    for(auto it: shelter){
        cout<< it <<" ";
    }


}

int main(){
    int n ;
    cin >> n;
    vector<int>constructionPoint(n);
    
    for(int index = 0; index < n; index ++){
        cin>> constructionPoint[index];
    }

    int m ;
    cin >> m;
    vector<int> shelterPoint(m);

    for(int index = 0; index < m; index ++){
        cin >> shelterPoint[index];
    }
    solution(n, constructionPoint ,m, shelterPoint);

    return 0;
}