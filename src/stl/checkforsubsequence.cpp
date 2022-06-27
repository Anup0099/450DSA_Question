#include <bits/stdc++.h>
using namespace std;

bool checkSubsequence(string &a, string &b)
{
    int m = a.length();
    int n = b.length();
    int i = 0;
    int j = 0;
    for(int i=0;i<m && j<n ;i++)
    {
        if (a[i] == b[j])
        {
            j++;
            
        }
        
    }
    
    return (j == n);
}

int main()
{
    string a = "geeksforgeeks";
    string b = "grges";
    cout << checkSubsequence(a, b);
}