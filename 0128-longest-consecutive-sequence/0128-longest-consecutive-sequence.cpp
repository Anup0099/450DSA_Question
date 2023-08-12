class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        if(n==0)return 0;
    sort(begin(arr), end(arr));
    int longest = 1;
    int count = 1;
    int lastNumber = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 == lastNumber)
        {
            count++;
            lastNumber = arr[i];
        }
        else if (arr[i] != lastNumber)
        {
            count = 1;
            lastNumber = arr[i];
        }
        longest = max(longest, count);
    }
    return longest;
    }
};