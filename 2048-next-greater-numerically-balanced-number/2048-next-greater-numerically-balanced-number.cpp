class Solution {
public:

        bool isBeautifulNumber(int n)
{
    int count[10] = {0};
    while (n)
    {
        count[n % 10]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (count[i] != i && count[i]!=0)
        {
            return false;
        }
    }
    return true;
}
int nextBeautifulNumber(int n)
{
    while (true)
    {
        if (isBeautifulNumber(++n))
        {
            return n;
        }
    }
    
}
    
};