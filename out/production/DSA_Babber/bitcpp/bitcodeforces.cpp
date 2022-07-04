#include <bits/stdc++.h>
using namespace std;
// outputstandard output
// There is an array a with n−1 integers. Let x be the bitwise XOR of all elements of the array. The number x is added to the end of the array a (now it has length n), and then the elements are shuffled.

// You are given the newly formed array a. What is x? If there are multiple possible values of x, you can output any of them.


int findx(vector<int> &a)
{
    int x = 0;
    for (int i = 0; i < a.size(); i++)
    {
        x ^= a[i];
    }
    return x;
}
 
int main(){
    int t;cin>>t;
    while(t--){
        
        int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<a[n-1]<<endl;

    }
}