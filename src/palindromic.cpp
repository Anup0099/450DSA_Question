#include <bits/stdc++.h> 
using namespace std;
// JJ has an array AA initially of length NN. He can perform the following operation on AA:

// 1) Pick any index ii (1 \le i \le |A|)(1≤i≤∣A∣) such that A_i \gt 1A 
// i
// ​
//  >1\\
// 2) Select any two integers XX and YY such that X + Y = A_iX+Y=A 
// i
// ​
//   and X, Y \ge 1X,Y≥1\\
// 3) Replace A_iA 
// i
// ​
//   with XX and YY

// Note that the length of the array increases by 11 after each operation.

// For example, if A = [4, 6, 7, 2]A=[4,6,7,2], he can select i = 1i=1 and select X = 1, Y = 3X=1,Y=3 (since X + Y = A_1X+Y=A 
// 1
// ​
//  ). After the operation array becomes: [\underline{4}, 6, 7, 2] \rightarrow [\underline{1}, \underline{3}, 6, 7, 2][ 
// 4
// ​
//  ,6,7,2]→[ 
// 1
// ​
//  , 
// 3
// ​
//  ,6,7,2].

// JJ wants to make AA palindromic. Find the minimum number of operations to do so.

// It is guaranteed that AA can be converted to a palindromic array by using the above operation.

// Note: An array is called a palindrome if it reads the same backwards and forwards, for e.g. [1, 3, 3, 1][1,3,3,1] and [6, 2, 6][6,2,6] are palindromic.

// Input Format
// The first line contains a single integer TT — the number of test cases. Then the test cases follow.
// The first line of each test case contains an integer NN — the size of the array AA.
// The second line of each test case contains NN space-separated integers A_1, A_2, \dots, A_NA 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//   denoting the array AA.
// Output Format
// For each test case, output the minimum number of operations to make AA palindromic. 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        int i=0;
        int j=n-1;
        while(i<j){
            if(a[i]==a[j]){
                i++;
                j--;
            }
            else if(a[i]>a[j]){
                a[j-1]+=a[j];
                count++;
                j--;
            }
            else{
                a[i+1]+=a[i];
                count++;
                i++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
    
} 