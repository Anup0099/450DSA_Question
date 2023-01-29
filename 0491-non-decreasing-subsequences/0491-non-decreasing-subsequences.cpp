class Solution {
public:
  void solve(int index , vector<int> &a,  int prevIndex , set<vector<int>> &ans , vector<int> temp)
   {
       if(index >= a.size())
       {
           if(temp.size() >= 2)
           ans.insert(temp);
           return ;
       }
// not Pick Index
       solve(index + 1 , a , prevIndex , ans , temp);


       if(prevIndex == -1 || a[index] >= a[prevIndex])
       {
                   // pick index
               temp.push_back(a[index]);
           solve(index + 1 , a , index , ans , temp);
       }

   }

    vector<vector<int>> findSubsequences(vector<int>& a) {
       set<vector<int>> ans ;
       vector<int> temp; 
        solve(0,a,-1,ans,temp);
        return vector(ans.begin() , ans.end()) ;
    }
};