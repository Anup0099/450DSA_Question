class Solution
{
    public:
        int numberOfPoints(vector<vector < int>> &nums)
        {
           	// given a 2d array nums representing the coordinates of the cars parking on a number line for any index nums[i] =[starti,endi] where starti starting point of ith car 1th car is starting from 3-6 and 2nd car is 1-5 ,3rd is 4-7 set me daal denge sabko 3 6 1 5 4 7 
            int n = nums.size();
    sort(nums.begin(), nums.end());
    int ans = 0;
    int count = 0;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int start = nums[i][0];
        int end = nums[i][1];
        for (int j = start; j <= end; j++)
        {
            s.insert(j);
        }

    }
    return s.size();
        }
};