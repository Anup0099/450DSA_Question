#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{
    map<int,int>m;
    
    
    for (int i = 0; i < nums.size();i++){
       if(m.find(nums[i]) != m.end()){
           return true;
       } else{
           m.insert({nums[i],i});

       }
    }
    return false;
    

}
int main()
{
    vector<int> numbers={1,2,3,4};
    cout<<containsDuplicate(numbers)<<endl;
}