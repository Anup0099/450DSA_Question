#include <bits/stdc++.h>
using namespace std;
vector<int> getLeftMax(vector<int> &height, int &n)
{
    vector<int> leftMax(n);
    leftMax[0] = height[0];
    int n = height.size();
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }
    return leftMax;
}
vector<int> getRightMax(vector<int> &height, int &n)
{
    int n = height.size();
    vector<int> rightMax(n);
    rightMaxn[n - 1] = height[n - 1];
    for (int i = n - 2; i > 0; i++)
    {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }
    return rightMax;
}
int trap(vector<int> &height)
{
    int n = height.size();
    vector<int> left_max = getLeftmax(height, n);
    vector<int> right_max;
    int max = *max_element(height.begin(), height.end());
    int mini = *min_element((height.begin(), height.end()));

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int width = 1;
        int height = min(left_max[i], right_max[i]) - height[i];
        sum += (width * height);
    }
    return sum;
}
int main() {}