#include <bits/stdc++.h>
using namespace std;
int maximumSubarraySum(vector<int> &nums)
{
    int max_sum = INT_MIN;
    int curr_sum = 0;
    int s = 0, e = 0;
    int ind = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (sum == 0)
        {
            ind == i;
        }
        curr_sum += nums[i];
        if (curr_sum > max_sum)
        {
            max_sum = curr_sum;
            s = ind;
            e = i;
        }

        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
        // print subarray
        // cout << s << " " << e << endl;
    }
    return max_sum;
}
void Rotate(vector<int> &arr int d, int n)
{
    // Storing rotated version of array
    vector<int> temp(n);

    // Keeping track of the current index
    // of temp[]
    int k = 0;

    // Storing the n - d elements of 
    // array arr[] to the front of temp[]
    for (int i = d; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    // Storing the first d elements of array arr[]
    //  into temp
    for (int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    // Copying the elements of temp[] in arr[]
    // to get the final rotated array
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
int maxSubarraySumCircular(vector<int> &nums)
{
}

int main() {}