#include <bits/stdc++.h>
using namespace std;


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