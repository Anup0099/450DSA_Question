#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &numbers, int target)
{
    vector<int>v;
    int sum=0;
    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size();j++){
            if(numbers[j]+numbers[i]==target){
                v.push_back(i);
                v.push_back(j);
                return v;
            }
        }
    }

}
int main() {}