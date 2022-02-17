#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     unordered_map<int, int> m;
//     for (int i = 0; i < n; i++)
//     {
//         int b = k - arr[i];
//         if (m[b])
//         {
//             cout << "Yes" << endl;
//             return 0;
//         }
//         m[arr[i]]++;
//     }
//     cout << "NO" << endl;
// }
const int N=1e5+10;
vector<int>g[N];
bool vis[N];
bool dfs(int vertex){
    //
    vis[vertex]=true;
    for (int child: g[vertex])
    {
        //
        if(vis[child])continue;
        dfs(child);
    }
 //    
}
int main(){
int n,m;cin>>n>>m;
for (int i = 0; i < 9; i++)
{
    int v1,v2;
    cin>>v1>>v2;
    g[v1].push_back(v2);
    g[v2].push_back(v1);
}

}