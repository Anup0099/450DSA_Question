class Solution {
public:
  string checkCommonPart(string a, string b)
{
    int n = a.length(), m = b.length();
    if (a.find((b)) != string::npos)
        return a;
    for (int i = min(n, m); i >= 0; i--)
    {
        if (a.substr(n - i, i) == b.substr(0, i))
        {
            return a.substr(0, n - i) + b;
        }
    }
    return a + b;
}
void isValid(string merged, string &result)
{
    if (result.length() == 0)
    {
        result = merged;
    }
    else if (merged.length() < result.length())
    {
        result = merged;
    }
    else if (merged.length() == result.length() && merged < result)
    {
        result = merged;
    }
}
string minimumString(string a, string b, string c)
{
    vector<string> arr = {a, b, c};
    int n = arr.size();
    string result="";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(i!=j && j!=k && i!=k)
                {
                    string merged = checkCommonPart(arr[i],arr[j]);
                    merged = checkCommonPart(merged,arr[k]);
                    isValid(merged,result);
                }
            }
        }
    }
    return result;

}
};