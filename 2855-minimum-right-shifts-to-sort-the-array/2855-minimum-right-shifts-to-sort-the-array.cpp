class Solution
{
    public:
        int minimumRightShifts(vector<int> &nums)
        {
           	 int n = nums.size();
    vector<int> temp = nums;
    for (int i = 0; i < n; i++)
    {
        temp.push_back(nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int f = 0;
        for (int j = i + 1; j < i + n; j++)
        {
            if (temp[j] < temp[j - 1])
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            return (n - i) % n;
        }
    }
    return -1;
        }
};