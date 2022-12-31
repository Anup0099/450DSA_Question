#include <bits/stdc++.h>
using namespace std;
// Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

// Since the result may be very large, so you need to return a string instead of an integer.
string largestNumber(vector<int> &nums)
{
    vector<string> vec;
    for (auto it : nums)
    {
        vec.push_back(to_string(it));
    }
    sort(begin(vec), end(vec), [](string &a, string &b) {
        return a + b > b + a;
    });
    for(auto it:vec){
        cout<<it<<" ";
    }
    string ans = "";
    for (auto it : vec)
    {
        ans += it;
    }
    return ans[0] == '0' ? "0" : ans;
}
int main() {
    vector<int> nums = {3, 30, 34, 5, 9};
    cout << largestNumber(nums);
    return 0;
}