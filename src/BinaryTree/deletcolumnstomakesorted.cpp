#include <bits/stdc++.h>
using namespace std;
bool isSorted(string word)
{

    // lexicographically sorted
   string s=sort(word.begin(),word.end());
   string s2=sort(word.begin(),word.end(),greater<int>());
    if(s==word || s2==word)
    {
         return true;
    }
    else
    {
         return false;
    }


}
int minDeletionSize(vector<string> &strs)
{
    int count = 0;
    for (int i = 0; i < strs[0].size(); i++)
    {
        for (int j = 0; j < strs.size() - 1; j++)
        {
            if (strs[j][i] > strs[j + 1][i])
            {
                count++;
                break;
            }
        }
    }
    return count;
}
int main() {
    vector<string> strs = {"cba", "daf", "ghi"};
    cout << minDeletionSize(strs);
    return 0;
}