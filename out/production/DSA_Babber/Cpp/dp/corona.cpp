#include <bits/stdc++.h>
using namespace std;
string mostFrequent(int arr[], int n)
{
    // Insert all elements in hash.
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
 
    // find the max frequency
    int max_count = 0, res = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
    string no = "NOTA";
    if(max_count<n/2)
        return no;
    string s = to_string(res);
    return s;
    



    return 0;
}

int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

       int arr[n];
        n = sizeof(arr) / sizeof(arr[0]);
       for (size_t i = 0; i < n; i++)
       {
           /* code */
           cin>>arr[i];
       }
     cout<< mostFrequent(arr,n);
       
       
    }
}