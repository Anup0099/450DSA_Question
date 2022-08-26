#include <bits/stdc++.h> 
using namespace std;
class MinStack {
    stack<pair<int,int>> s;
    public:
    int min;
    if(s.empty()) {
        min=x;
    }else{
        min=min(x,s.top().second);
    }
    s.push({x,min});

    void pop() {
        s.pop();
    }
    int top(){
        return s.top().first;
    }
    int getMin(){
        return s.top().second;
    }
} 
int main() {} 