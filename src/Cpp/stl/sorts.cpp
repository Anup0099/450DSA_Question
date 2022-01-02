#include <bits/stdc++.h>
using namespace std;

vector<int> sortVector(vector<int>v)
{
   //Your code here. Use library function
   sort(v.begin(),v.end());
    return v;
}
vector<int> reverseVector(vector<int>v)
{
     //Your code here. Use library function
     reverse(v.begin(),v.end());
    return v;
}
void sum(vector<pair<int,int>>v)
{
    long long sum=0;
    //Your code here
    for(auto i=v.begin();i!=v.end();i++){
        sum+=i->second;
    }
    
    
    cout<<sum;
    cout<<endl;
}
void iter(vector<int>::iterator it1,vector<int>::iterator it2)
{
    //Your code here. Use iterator to print all the elements
    for(auto i=it1;i!=it2;i++){
        cout<<*i<<" ";
    }
    cout<<endl;
}
void reverseIterator(vector<int>::reverse_iterator it1, vector<int>::reverse_iterator it2){
    
    // Your code here
       while (it1!=it2)
       {
           /* code */
              cout<<*it1<<" ";
                it1++;
       }
    
        
    cout<<endl;
    
}

int main(){

}