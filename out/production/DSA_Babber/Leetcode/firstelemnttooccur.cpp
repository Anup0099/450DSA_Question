#include <bits/stdc++.h>
using namespace std;
int firstElementKTime(int a[], int n, int k)
{
    unordered_map<int, int> mapp;
    for (int i = 0; i < n; i++)
    {
        mapp[a[i]]++;
        if (mapp[a[i]] == k)
            return a[i];
    }

    return -1;
}
int maxLen(vector<int> &A, int n)
{
    int sum;
    int count = 0;
    map<int, int>m;
    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i];
        if(sum==0){
            count++;
        }else{
            if(m.find(sum)!=m.end()){
                
            }
        }
       
    }
    return count;
}
int main()
{
}