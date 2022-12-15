#include <bits/stdc++.h> 
using namespace std;
vector<int>leftRotate(vector<int>&arr){
    int temp = arr[0];
    for(int i = 0; i < arr.size()-1; i++){
        arr[i] = arr[i+1];
    }
    arr[arr.size()-1] = temp;
    return arr;
} 
//right rotate
void rotate(vector<int>&nums,int k)
{
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}
int main() {} 