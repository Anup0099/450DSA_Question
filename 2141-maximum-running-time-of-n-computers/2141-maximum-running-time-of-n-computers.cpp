class Solution
{
    public:
        bool possible(vector<int> &batteries, long long mid, int n)
        {

            long long result = n * mid;
            long long sum = 0;
            for (int i = 0; i < batteries.size(); i++)
            {
                result -= min((long long) batteries[i], mid);
                if (result <= 0)
                {
                    return true;
                }
            }
            return false;
        }
    long long maxRunTime(int n, vector<int> &batteries)
    {
        int m = batteries.size();
        long long sum = 0;
        for (auto &mints: batteries)
        {
            sum += mints;
        }
        long long low = *min_element(begin(batteries), end(batteries));
        long long right = sum / n;
        long long result = 0;
        while (low <= right)
        {
            long long mid = low + (right - low) / 2;
            if (possible(batteries, mid, n))
            {
                result = mid;
                low = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return result;
    }
};