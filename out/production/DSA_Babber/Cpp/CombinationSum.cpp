#include <bits/stdc++.h>
using namespace std;




double multiply(double number, double n){
    double ans = 1.0;
    for (size_t i = 0; i <=n; i++)
    {
        /* code */
        ans = ans*number;
    }
    return ans;
    
}
// double getNthroot(int n, int m){
//      double low = 1;
//      double high =m;
//      double eps = 1e-6;
//      while((high-low)>eps){
//          double mid =(low+high)/2;
//          if(multiply(mid,n)<m){
//                 low = mid;
//          }else{
//                 high = mid;
//          }
//      }
//      cout<<low<<" "<<high<<endl;
//      cout<<pow(m,(double)(1.0/(double)n));
//     return low;
//  }

int squareroot(int x){
    int y=0;
    while(y*y<=x){
        y++;
    }
    return y-1;
}
int main()
{
    
    




}