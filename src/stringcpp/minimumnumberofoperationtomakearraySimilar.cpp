#include <bits/stdc++.h>
using namespace std;
long long makeSimilar(vector<int> &nums, vector < int >> &target)
{
}
int heightChecker(vector<int> &heights)
{
  vector<int> h = heights;
        int c=0;
         sort(heights.begin(),heights.end());
         for(int i =0;i<h.size();i++){
             if(h[i]!=heights[i])
             c++;
         }
         return c;
}
int main() {}