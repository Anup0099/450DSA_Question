class Solution {
public:
   int trailingZeroes(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        // run a loop from 1 to n and count the number of 5s in each number
        int j = i;
        while (j % 5 == 0)
        {
            //if the number is divisible by 5, increase the count and divide the number by 5
            count++;
            j /= 5;
            cout<<j<<endl;
            // keep dividing the number by 5 until it is divisible by 5
        }
    }

    return count;
}
int trailingZero(int n)
{
    return trailingZeroes(n);
}
};