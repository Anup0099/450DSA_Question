#include <bits/stdc++.h>
using namespace std;
int countPairs(vector<int> &nums, int k)
{
    int count = 0;

    for (size_t i = 0; i < nums.size(); i++)
    {
        for (size_t j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j] && (i * j) % k == 0)
            {
                count++;
            }
        }
    }
    return count;
}
vector<long long> sumOfThree(long long num)
{
    vector<long long>v;
    long long x;
    long long a= x,b=x+1,c=x+2;
    long long ans = (num-3)/3;

   if( (num-3)%3!=0){
    return v;
   }else if((num-3)%3==0){

    v.push_back(ans);
    v.push_back(ans+1);
    v.push_back(ans+2);
   }
    return v;
  
}
int main()
{
    vector<long long>v;
    for (size_t i = 0; i < v.size(); i++)
    {
            cin>>v[i];
    }
    v= sumOfThree(11);
    
   
    
}