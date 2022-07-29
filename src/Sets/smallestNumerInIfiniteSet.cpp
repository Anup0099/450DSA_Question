#include <bits/stdc++.h> 
using namespace std; 
class SmallestInfiniteSet {
public:
    vector<bool>v;
    int i;
    SmallestInfiniteSet() {
        v.resize(100000,false);
        i=0;
        
    }
    
    int popSmallest() {
     for(int  i=0;i<v.size();i++){
         if(v[i]==false){
             v[i]=true;
             return i+1;
         }
     }

     return -1;
    }
    
    void addBack(int num) {
        v[num-1]=false;
    }
};

class SmallestInfiniteSet {
public:
   priority_queue <int, vector<int>, greater<int> > pq;
    set<int>set;
    SmallestInfiniteSet() {
      for(int i=1;i<=100000;i++){
          pq.push(i);
          set.insert(i);
      }
        
    }
    
    int popSmallest() {
     
        int x=pq.top();
        pq.pop();
        set.erase(x);
        return x;
      
    }
    
    void addBack(int num) {
       if(!set.count(num)){
           pq.push(num);
           set.insert(num);
       }
    }
};
int main() {


} 
