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
/*inserts an element x to the unordered set s */
void insert(unordered_set<int> &s,int x)
{
	//Your code here
    s.insert(x);

	
}
void erase(unordered_set<int> &s,int x)
{
	//Your code here
    s.erase(x);
}

/*returns 1 if the element x is present
in unordered set s else returns -1 */
int find(unordered_set<int> &s,int x)
{
     //Your code here
        if(s.find(x)!=s.end()){
            return 1;
        }
        
}
int size(unordered_set<int> &s)
{
      //Your code here
        return s.size();
      
}
vector<int> stringSearch(string big,string small){
    //store the occurrences in the result vector
    vector<int> result = {};
    //Your code here
   int index=big.find(small);
    while(index!=-1){
         result.push_back(index);
         index=big.find(small,index+1);
    }
     return result;



}

int main(){
    

    string para= "lorem ipsum dolor sit amet, consectetur adip";
    string word ;
    getline(cin,word);
    size_t index= para.find(word,index+1);

    string c ;
    cout<<c.tolower()<<endl;

    
}