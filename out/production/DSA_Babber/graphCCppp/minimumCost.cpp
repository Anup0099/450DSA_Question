#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    int m = nums2.size();
    set<int> s(nums1.begin(), nums1.end());
    set2<int> s2(nums2.begin(), nums2.end());
    vector<int> v1, v2;
    vector<vector<int>> ans;
    set_difference(s.begin(), s.end(), s2.begin(), s2.end(), inserter(v1, v1.begin()));
    set_difference(s2.begin(), s2.end(), s.begin(), s.end(), inserter(v2, v2.begin()));
    return {v1, v2};
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 3, 4, 5, 6};
    vector<vector<int>> ans = findDifference(nums1, nums2);
    for (auto it : ans)
    {
        for (auto it2 : it)
        {
            cout << it2 << " ";
        }
        cout << endl;
    }
    return 0;
}