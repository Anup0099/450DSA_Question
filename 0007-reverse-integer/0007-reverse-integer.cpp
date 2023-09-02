class Solution
{
    public:
        int reverse(int x)
        {
             long int pos=abs(x);
        long int temp=0;
        while(pos>0)
        {
            int dig=pos%10;
            temp=10*temp+dig;
            pos/=10;
        }
        if (temp>=pow(2,31)-1 || temp<=-pow(2,31)) return 0;
        if (x>=0) return temp;
        else return -temp;
        
        }
};