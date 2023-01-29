class Solution {
public:
    int minOperations(vector<string>& logs) {
         stack<string> st;

    for (int i = 0; i < logs.size(); i++)
    {
        string str = logs[i];
        if (str == "../")
        {
            if (!st.empty())
            {
                st.pop();
            }
        }
        else if (str != "./")
        {
            st.push(str);
        }
    }
    return st.size();
    }
};