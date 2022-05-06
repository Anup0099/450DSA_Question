#include <bits/stdc++.h>
using namespace std;

  void nextPermutation(vector<int>& nums) {
     sort(nums.begin(), nums.end());
     cout<<next_permutation(nums.begin(), nums.end());   
    }


    int main(){
        cout<<next_permutation();
    }