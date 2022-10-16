class Solution {
public:
   int reverse(int num){
    int rev = 0;
    while (num > 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}
bool sumOfNumberAndReverse(int num)
{
   for (int i = 0; i <= num; i++)
   {
       if (i + reverse(i) == num)
       {
           return true;
       }
   }
    return false;
}
};