#include <bits/stdc++.h> 
using namespace std;

int countInversions(vector<int>&nums){
    int count = 0;
    for(int i = 0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            if(i < j && nums[i] > nums[j]){
                count++;
            }
        }
    }
    return count;

}
int main() {
    vector<int> nums = {8,4,2,1};
    int s = countInversions(nums);
    cout << s << endl;
} 