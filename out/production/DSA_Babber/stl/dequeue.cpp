#include <bits/stdc++.h>
using namespace std;
deque<int> dq;
void inserMin(int x){
    dq.push_front(x);
}
void insertMax(int x){
    dq.push_back(x);
}
int getMin(){
    return dq.front();
}
int getMax(){
    return dq.back();
}
int main(){
    pair<int, int> p;
    p.first = 1;
    p.second = 2;
    
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_front(68);
    d.pop_front();
    d.pop_back(); 
    cout<<d.size()<<endl;
    for(auto x:d){
        cout << x << " ";
    }
}