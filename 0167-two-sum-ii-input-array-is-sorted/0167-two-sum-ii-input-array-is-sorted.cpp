class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
        vector<int> v;
    int n = arr.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] > k)
        {
            j--;
        }
        else if (arr[i] + arr[j] < k)
        {
            i++;
        }
        else
        {
            return {i + 1, j + 1};
        }
    }
    return {};
    }
};