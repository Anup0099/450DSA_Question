class Solution {
public:
    int countStudents(vector<int>& student, vector<int>& sandwich) {
        int n = student.size();
    int m = sandwich.size();
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        q.push(student[i]);
    }
    stack<int> st;
    for (int i = m - 1; i >= 0; i--)
    {
        st.push(sandwich[i]);
    }
    int count = 0;
    while (!q.empty() and !st.empty())
    {
        if (q.front() == st.top())
        {
            q.pop();
            st.pop();
            count = 0;
        }
        else
        {
            int temp = q.front();
            q.pop();
            q.push(temp);
            count++;
        }
        if (count == q.size())
            break;
    }
    return q.size();
    }
};