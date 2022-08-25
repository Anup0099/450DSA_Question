#include <bits/stdc++.h>
using namespace std;
    //recursion 
    //count total subsequence
  
int numTilePossibilities(string tiles)
{
    int n=tiles.size();
    int ans=pow(2,n);
    return ans;



}
int main() {
    string s = "AAABBC";
    cout << numTilePossibilities(s) << endl;
    return 0;
}