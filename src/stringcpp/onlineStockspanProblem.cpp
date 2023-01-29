#include <bits/stdc++.h>
using namespace std;
class StockSpanner
{
    // stack help in reducing the time complexity
    // jisme past ka information chahiye
    // we have to use loop for brute force

public:
    stack<pair<int, int>> st;

    StockSpanner()
    {
        
    }
    int next(int price)
    {
        int span = 1;
        while (!st.empty() && st.top().first <= price)
        {
            span = span + st.top().second;
            st.pop();
        }
        st.push({price, span});

        return span;
    }
};
int main() {}