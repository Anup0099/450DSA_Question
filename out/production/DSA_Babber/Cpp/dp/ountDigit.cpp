#include <bits/stdc++.h>
using namespace std;
int digitsum(int nums)
{
    int sum = 0;
    while (nums>0)
    {
        
    int rem = nums % 10;
    sum = sum + rem;
    nums = nums / 10;
    }
    
    return sum;
}
int countEven(int num)
{
    int count = 0;
    for (size_t i = 2; i <= num; i++)
    {
       if(digitsum(i)%2==0){
           count++;
       }
    }
    return count;
}

int main()
{
    cout << countEven(30);
}