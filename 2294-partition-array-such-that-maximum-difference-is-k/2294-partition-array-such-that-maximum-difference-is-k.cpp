class Solution {
public:
    int partitionArray(vector<int>& A, int k) {
         sort(A.begin(), A.end());
    int res = 1, mx = A[0], mn = A[0];
    for (auto a : A)
    {
        mx = max(mx, a);
        mn = min(mn, a);
        if (mx - mn > k)
        {
            res++;
            mn = mx = a;
        }
    }
    return res;
    }
};