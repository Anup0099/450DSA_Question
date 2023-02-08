#include <bits/stdc++.h> 
using namespace std;
// Alex doesn't like boredom. That's why whenever he gets bored, he comes up with games. One long winter evening he came up with a game and decided to play it.

// Given a sequence a consisting of n integers. The player can make several steps. In a single step he can choose an element of the sequence (let's denote it ak) and delete it, at that all elements equal to ak + 1 and ak - 1 also must be deleted from the sequence. That step brings ak points to the player.

// Alex is a perfectionist, so he decided to get as many points as possible. Help him.

// Input
// The first line contains integer n (1 ≤ n ≤ 105) that shows how many numbers are in Alex's sequence.

// The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 105).

// Output
// Print a single integer — the maximum number of points that Alex can earn.
int f(int i,int n,int a[],int dp[]){
    if(i>=n){
        return 0;
    }
    if(dp[i]!=0){
        return dp[i];
    }
    int op1=f(i+1,n,a,dp);
    int op2=0;
    if(i+1<n && a[i]==a[i+1]-1){
        op2=a[i]+f(i+2,n,a,dp);
    }
    else if(i+1<n && a[i]==a[i+1]+1){
        op2=a[i]+f(i+2,n,a,dp);
    }
    else{
        op2=a[i]+f(i+1,n,a,dp);
    }
    return dp[i]=max(op1,op2);
}
int main() {
   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int dp[n]={0};
    cout<<f(0,n,a,dp);
       
    
}  