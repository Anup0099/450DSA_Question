#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> p;
    vector<int> n;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= 0)
        {
            p.push_back(nums[i]);
        }
        else
        {
            n.push_back(nums[i]);
        }
    }
    int i = 0,j=0,k=0;
    while (i < p.size() && j < n.size())
    {
        ans.push_back(p[i]);
        ans.push_back(n[j]);
        i++;
        j++;
    }
    while (i < p.size())
    {
        ans.push_back(p[i]);
        i++;
    }
    while (j < n.size())
    {
        ans.push_back(n[j]);
        j++;
    }
    return ans;

}
void rearrange(int arr[], int m)
{
    vector<int> p;

    vector<int> n;

    for (int i = 0; i < m; i++)

    {

        if (arr[i] < 0)
            n.push_back(arr[i]);

        else
            p.push_back(arr[i]);
    }

    int i = 0, j = 0, k = 0;

    while (i < m)

    {

        if (j < p.size())

        {

            arr[i] = p[j];

            i++;
            j++;
        }

        if (k < n.size())

        {

            arr[i] = n[k];

            i++;
            k++;
        }
    }
}
vector<int> subarraySum(int arr[], int n, long long s)
{
    vector<int> v;
    // all subarray
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == s)
            {
                v.push_back(i + 1);
                v.push_back(j + 1);
                return v;
            }
        }
    }
    v.push_back(-1);
    return v;
}

vector<int> subarraySum1(int arr[], int n, long long s)
{
    int curr_sum = arr[0], s = 0;
    vector<int> v;
    for (int i = 1; i < n; i++)
    {
        while (curr_sum > s && s < i - 1)
        {
            curr_sum -= arr[s];
            s++;
        }
        if (curr_sum == s)
        {
            v.push_back(s + 1);
            v.push_back(i);
            return v;
        }
        if (i < n)
        {
            curr_sum += arr[i];
        }
    }
    v.push_back(-1);
    return v;
}
int main()
{
    vector<int> v;
    int arr[] = {1, 4, 20, 3, 10, 5};
    int sum = 5;
    cout << subarraySum(arr, 6, 5);
    return 0;
}