class Solution {
public:
    int minOperations(int n) {
        int ops = 0;
    for (int i = 0; i < n / 2; i++)
    {
        int x = 2 * i + 1;
        ops += (n - x);
    }
    return ops;
    }
};