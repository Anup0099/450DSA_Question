#include <bits/stdc++.h>
using namespace std;
int minimumSwap(string s1, string s2)
{
    int n = s1.size();
    // int count = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (s1[i] != s2[i])
    //     {
    //         count++;
    //     }
    // }
    // if (count % 2 != 0)
    // {
    //     return -1;
    // }
    // int count1 = 0;
    // int count2 = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (s1[i] == 'x' && s2[i] == 'y')
    //     {
    //         count1++;
    //     }
    //     else if (s1[i] == 'y' && s2[i] == 'x')
    //     {
    //         count2++;
    //     }
    // }
    // return (count1 / 2) + (count2 / 2) + (count1 % 2) + (count2 % 2);
    int count = 0,count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
        {
            if(s1[i]=='x'){
                count++;
            }
            else{
                count2++;
            }
        }
    }
    if(count% 2==0 and count2% 2==0){
        return (count + count2) / 2;
    }
    else if(count% 2!=0 and count2% 2!=0){
        return (count + count2) / 2 + 1;
    }
    else{
        return -1;
    }
}
int main() {}