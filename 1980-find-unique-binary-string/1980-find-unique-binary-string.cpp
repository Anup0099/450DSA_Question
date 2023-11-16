class Solution {
public:
string solve(vector<string> &nums, string ans, int i, int n)
{
    // generate all possible binary strings of length n and check if it is present in nums or not if not then return it
    if (i == n)
    {
        if (find(nums.begin(), nums.end(), ans) == nums.end())
        {
            return ans;
        }
        return "";
    }
    string temp1 = solve(nums, ans + "0", i + 1, n);
    if (temp1 != "")
    {
        return temp1;
    }
    string temp2 = solve(nums, ans + "1", i + 1, n);
    if (temp2 != "")
    {
        return temp2;
    }
    return "";
}
string findDifferentBinaryString(vector<string> &nums)
{
    int n = nums.size();
    string ans = "";
    return solve(nums, ans, 0, n);
}
};