#include <bits/stdc++.h>
using namespace std;
//Input: s = "is2 sentence4 This1 a3"
//Output: "This is a sentence"
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int>v;
    set<int>s1(nums1.begin(),nums1.end());
    set<int>s2(nums2.begin(),nums2.end());
    
    for(auto z:s1){
        if(s2.find(z)!=s2.end()){
            v.push_back(z);
        }
    }
    return v;
}
int main()
{
}