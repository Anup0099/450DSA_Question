#include <bits/stdc++.h>
using namespace std;

//codeforces 2ndd qoestin
// int find_rightmost_x(vector<int> &b){
//     int n = (int)b.size() - 1;

//     int x = 1;
//     while( x + 1 <= n && b[x+1] == b[1] )
//         x ++;

//     return x;
// }

// void apply(vector<int> &b,int l,int r){
//     int k = ( r - l + 1 ) / 2;
//     for(int i=0; i<k; i++)
//         b[l+k+i] = b[l+i];
// }

// int main(){

//     int tc;
//     cin >> tc;
//     while( tc-- ){

//         int n;
//         cin >> n;

//         vector<int> a(n+1);
//         for(int i=1; i<=n; i++)
//             cin >> a[i];

//         vector<int> b = a;
//         reverse(b.begin()+1,b.end());

//         int ans = 0;
//         while( find_rightmost_x(b) != n ){
//             int x = find_rightmost_x(b);
//             if( 2 * x > n ){
//                 apply(b,x-(n-x)+1,n);
//                 ans ++;
//             }
//             else{
//                 apply(b,1,2*x);
//                 ans ++;
//             }
//         }
//         cout << ans << '\n';
//     }


//     return 0;
// }


int main(){
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>n>>k;
        if(n==4 && k==3){
            cout<<-1<<endl;
            continue;
        }
        int v[n/2][2];
        for (size_t i = 0; i < n/2; i++)
        {
            /* code */
            v[i][0]=i;
            v[i][1]=n-i-1;

        }
        if(k==n-1){
            swap(v[0][0],v[1][1]);
            swap(v[1][1],v[2][1]);}
        else{
           if (k<n/2)
           {
               /* code */
               swap(v[0][0],v[k][0]);
           }else{
                k=n-k-1;
            swap(v[0][0],v[k][1]);
           }
           
        }
        for (size_t i = 0; i < n/2; i++)
        {
            /* code */
            cout<<v[i][0]<<" "<<v[i][i]<<"\n";
        }
        

    }
    return 0;
}