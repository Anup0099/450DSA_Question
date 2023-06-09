class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
    int high = n - 1, low = 0;
    while (low <= high)
    {
        int mid = (high - low) + low / 2;
        if (letters[mid] <= target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low < n ? letters[low] : letters[0];
    }
};