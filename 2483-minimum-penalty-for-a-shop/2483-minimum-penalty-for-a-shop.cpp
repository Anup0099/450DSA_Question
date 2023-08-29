class Solution {
public:
    int bestClosingTime(string customers) {
         int n = customers.size();
    vector<int> preforN;
    vector<int> preforY;
    preforN.push_back(0);
    preforY.push_back(0);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (customers[i] == 'N')
        {
            count++;
        }
        preforN.push_back(count);
    }

    count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (customers[i] == 'Y')
        {
            count++;
        }
        preforY.push_back(count);
    }
    reverse(preforY.begin(), preforY.end());
    int ans = INT_MAX;

    int ind = 0;
    for (int i = 0; i < n+1; i++)
    {
        int h = preforN[i] + preforY[i];
        if (h < ans)
        {
            ans = h;
            ind = i;
        }
    }
    return ind;
    }
};