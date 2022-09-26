#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> findDuplicate(vector<string> &paths)
{
    vector<vector<string>> result;
    unordered_map<string, vector<string>> map;
    for (string path : paths)
    {
        stringstream ss(path);
        string root;
        string s;
        getline(ss, root, ' ');
        while (getline(ss, s, ' '))
        {
            string content = s.substr(s.find('(') + 1, s.find(')') - s.find('(') - 1);
            string file = root + '/' + s.substr(0, s.find('('));
            map[content].push_back(file);
        }
    }
    for (auto m : map)
    {
        if (m.second.size() > 1)
            result.push_back(m.second);
    }
    return result;
}
int main() {}