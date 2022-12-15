#include <bits/stdc++.h> 
using namespace std;
int minBitFlips(int start,int goal){
    int target=start^goal;
    int count=0;
    while(target){
        if(target&1){
            count++;
        }
        target=target>>1;
    }
    return count;
} 
int main() {
    int start,goal;
    cin>>start>>goal;
    cout<<minBitFlips(start,goal);
    return 0;
} 