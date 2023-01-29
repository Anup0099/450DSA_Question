#include <bits/stdc++.h> 
using namespace std;
//  Chef was driving on a highway at a speed of 
// �
// X km/hour.

// To avoid accidents, there are fine imposed on overspeeding as follows:

// No fine if the speed of the car 
// ≤
// 70
// ≤70 km/hour.
// Rs 
// 500
// 500 fine if the speed of the car is strictly greater than 
// 70
// 70 and 
// ≤
// 100
// ≤100.
// Rs 
// 2000
// 2000 fine if the speed of the car is strictly greater than 
// 100
// 100.
// Determine the fine Chef needs to pay.

// Input Format
// The first line of input will contain a single integer 
// �
// T, denoting the number of test cases.
// Each test case consists of a single integer 
// �
// X denoting the speed of Chef's car.
// Output Format
// For each test case, output the fine paid by Chef.
int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x<=70){
            cout<<"0"<<endl;
        }
        else if(x>70 && x<=100){
            cout<<"500"<<endl;
        }
        else{
            cout<<"2000"<<endl;
        }
    }
    return 0;

} 