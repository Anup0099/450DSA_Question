#include <bits/stdc++.h>
using namespace std;
// sort the map of second element


//sort pair<string, int> &a
bool cmp(pair<string, int> &a,
         pair<string, int> &b)
{
    return a.first < b.first;
}

vector<string> sortPeople(vector<string> &names, vector<int> &heights)
{
    vector<pair<int, string>> A;
        int N = names.size();
        for(int i = 0; i < N; i++) {
            A.push_back({heights[i], names[i]});
        }

        sort(A.rbegin(), A.rend());

        vector<string> ans;
        for(int i = 0; i < N; i++) {
            ans.push_back(A[i].second);
        }
        return ans;
    
}
int main() {
    vector<string> names = {"a", "b", "c", "d", "e", "f"};
    vector<int> heights = {170, 180, 165, 177, 185, 172};
    vector<string> ans = sortPeople(names, heights);
    for (int i = 0; i < ans.size();i++){
        cout << ans[i] << " ";
    }
}