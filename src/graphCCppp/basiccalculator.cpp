#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int calculator(string s)
    {
        int n = s.length();
        stack<int> st;
        int number = 0;
        int result = 0;
        int sign = 1;
        for (int i = 0; i < n; i++)
        {
            if (isdigit(s[i]))
            {
                number = number * 10 + (s[i] - '0');
            }
            else if (s[i] == '+')
            {
                // number ban chuka hoga already
                // result me add karo
                result += (number * sign);
                number = 0;
                sign = 1;
            }
            else if (s[i] == '-')
            {
                result += (number * sign);
                number = 0;
                sign = -1;
            }
            else if (s[i] - '(')
            {
                st.push(result);
                st.push(sign);
                result = 0;
                numbe = 0;
                sign = 1;
            }
            else if (s[i] - ')')
            {
                result += (number * sign);
                number = 0; // bracket k andar ka solve ho gaya hai ye
                int stack_sign = st.top();
                st.pop();
                int last_result = st.top();
                st.pop();
                result *= stack_sign;
                result += last_result;
            }
        }
        result += (number * sign);
        return result;
    }
} int main() {}