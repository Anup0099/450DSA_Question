#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> anagrams(vector<string> &A)
{
    vector<vector<string>> mp;
    map<string, vector<int>> m;
    for (int i = 0; i < A.size(); i++)
    {
        string s = A[i];
        sort(s.begin(), s.end());
        if (m.count(s))
        {
            m[s].push_back(i+1);
        }
        else
        {
            m[s].push_back(i+1);
        }
    }
    for(auto it:m){
        cout<<it.first<<" "<<endl;
    }
    map<string, vector<int>>::iterator it = m.begin();
    while (it != m.end())
    {
        mp.push_back(it->second);
        it++;
    }
    return mp;
}

int main() {
    vector<string> A = {"cat", "dog", "god", "tca"};
    anagrams(A);
    return 0;
}