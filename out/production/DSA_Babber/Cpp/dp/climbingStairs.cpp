#include <bits/stdc++.h>
using namespace std;
//  int climbStairs(int n) {
//         if(n==0){
//             return 1;
//         }
//         if(n==1){
//             return 1;
//         }
//         int ans = climbStairs(n-1)+climbStairs(n-2);
//         return ans;
//     }
 int climbStairs(int n) {
     int prev2 = 1;
  int prev = 1;
  
  for(int i=2; i<=n; i++){
      int cur_i = prev2+ prev;
      prev2 = prev;
      prev= cur_i;
  }
  return prev;
 }
int main(){
     cout<<climbStairs(3);
}