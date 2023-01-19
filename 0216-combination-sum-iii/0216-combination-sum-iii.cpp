class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
void recursion(  int k, int n, int i)
{
    if(k==0 && n==0)
    {     ans.push_back(temp);
            return;
    }
    
    for(int ind=i;ind<=9;ind++)
    {
        temp.push_back(ind);
        recursion(k-1,n-ind,ind+1);
        temp.pop_back();
    }
    
}
    vector<vector<int>> combinationSum3(int k, int n) {
         recursion(k,n,1);
    return ans;
    }
};