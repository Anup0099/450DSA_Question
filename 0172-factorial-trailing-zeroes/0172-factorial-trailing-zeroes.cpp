class Solution {
public:
    int trailingZeroes(int n) {
       int count = 0;
    int i = 5;
    while (n / i >= 1)
    {
        count += n / i;
        i *= 5;
    }
    return count;
    }
};