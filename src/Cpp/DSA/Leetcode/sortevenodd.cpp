#include <bits/stdc++.h>
using namespace std;

 vector<int> sortEvenOdd(vector<int>& nums) {
     vector<int>result(nums.size());
        for (int i = 0; i < nums.size();i++){
            if(i%2==0){
               
            }
            else{
                sort(nums.begin(), nums.end());
            }
        }
        return nums;
    }


 int countOperations(int num1, int num2) {
        int count=0;
        while( num1 && num2 ) {
            if(num1>num2) {
                num1 -=num2;
            }else{
                num2 -=num1;
                count++;
            }

        }
        return count;
    }


int main(){

}