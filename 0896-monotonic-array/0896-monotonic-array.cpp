class Solution
{
    public:
        bool isMonotonic(vector<int> &arr)
        {
            bool inc = true;
            bool dec = true;
            for (int i = 0; i < arr.size() - 1; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    inc = false;
                }
                if (arr[i] < arr[i + 1])
                {
                    dec = false;
                }
            }
            return inc || dec;
        }
};