#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 26;
bool arekanagrams(string str1, string str2, int k)
{
    int n1 = str1.length();
    if (str2.length() != n1)
    {
        return false;
    }
    int count1[MAX_CHAR] = {0};
    int count2[MAX_CHAR] = {0};
    for (int i = 0; i < n1; i++)
    {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }
    for (int i = 0; i < n1; i++)
    {
        cout << count1[i] << " ";
    }
    int count = 0;
    for (int i = 0; i < MAX_CHAR; i++)
    {
        if (count1[i] != count2[i])
        {
            count++;
        }
    }
    if (count <= k)
    {
        return true;
    }
    return false;
}
bool  kaanagrams(string str1,string str2,int k){
    
}
int main()
{
    string str1 = "geeksforgeeks";
    string str2 = "geeksforgeeks";
    int k = 1;
    if (arekanagrams(str1, str2, k))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}