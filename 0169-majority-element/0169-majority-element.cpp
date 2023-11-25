class Solution
{
    public:
        int majorityElement(vector<int> &v)
        {
            int n = v.size();
            int count = 0;
            int el;
            for (int i = 0; i < n; i++)
            {
                if (count == 0)
                {
                    count = 1;
                    el = v[i];
                }
                else if (v[i] == el)
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }
            count = 0;
            for (int i = 0; i < n; i++) {
                
                if(v[i]==el)
                {
                    count++;
                }
            }
            if(count>n/2)
            {
                return el;
            }
            return -1;
        }
};