class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        int m = flowers.size();
  int n = people.size();
  vector<int> ans(n);
  vector<int> start(m);
  vector<int> end(m);

  for (int i = 0; i < m; i++)
  {
    start[i] = flowers[i][0];
    end[i] = flowers[i][1];
  }
  sort(start.begin(), start.end());
  sort(end.begin(), end.end());
  for (int i = 0; i < n; i++)
  {
    int bloomed_already = upper_bound(start.begin(), start.end(), people[i]) - start.begin();
    int yet_to_bloom = lower_bound(end.begin(), end.end(), people[i]) - end.begin();
    ans[i] = bloomed_already - yet_to_bloom;
  }
  return ans;
    }
};