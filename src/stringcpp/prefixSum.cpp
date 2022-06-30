#include <bits/stdc++.h>
using namespace std;

// vector<int> prefixSum(int arr[],int n){
//     int pre[n];
//     pre[0]=arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         pre[i]=pre[i-1]+arr[i];
//     }
//     return ;

// }
int largestAltitude(vector<int> &gain)
{
    vector<int> prefix_sum;
    prefix_sum.push_back(0);
    int sum;
    for (int i = 0; i < gain.size(); i++)
    {
        sum = prefix_sum[i] + gain[i];
        prefix_sum.push_back(sum);
    }
    

    return *max_element(prefix_sum.begin(), prefix_sum.end());
}
int main()
{

    vector<int> gain = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(gain) / sizeof(gain[0]);
    int ans = largestAltitude(gain);
    cout << ans << endl;

    return 0;
}