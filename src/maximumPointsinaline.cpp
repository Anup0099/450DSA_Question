#include <bits/stdc++.h>
using namespace std;
int maxPoints(vector<vector<int>> &points)
{
    int n = points.size();
    if (n < 3)
        return n;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int duplicate = 1;
        int vertical = 0;
        unordered_map<double, int> slope;
        for (int j = i + 1; j < n; j++)
        {
            if (points[i][0] == points[j][0] && points[i][1] == points[j][1])
                duplicate++;
            else if (points[i][0] == points[j][0])
                vertical++;
            else
            {
                double k = (double)(points[i][1] - points[j][1]) / (points[i][0] - points[j][0]);
                slope[k]++;
            }
        }
        res = max(res, duplicate);
        for (auto it : slope)
            res = max(res, it.second + duplicate);
        res = max(res, vertical + duplicate);
    }
    return res;
}
int main() {}