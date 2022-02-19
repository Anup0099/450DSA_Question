#include <bits/stdc++.h>
using namespace std;
  void sortColors(vector<int>& nums) {
        int low=nums[0],mid=nums[0];
        int high =nums.size()-1;
        while (mid<=high)
        {
            switch (nums[mid]) { 

            // If the element is 0 
            case 0: 
                swap(nums[lo++], nums[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(nums[mid], nums[hi--]); 
                break; 
            }
        }
        

       
    }
int main(){
    vector<int>v = {2,0,2,1,1,0};
    sortColors(v);

}