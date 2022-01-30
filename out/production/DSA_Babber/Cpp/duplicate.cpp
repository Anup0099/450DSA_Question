#include <bits/stdc++.h>
using namespace std;
string remove(string s,int k){
    // string s ;
    // cin>>s;
    // int k;
    // cin>>k;
    stack<pair<char,int>>st;
    pair<char,int>t;
    int i=0;
    while (i<s.length())
    {
        /* code */
        if(st.empty()){
            st.push({s[i],1});
        }else{
            if(st.top().first==s[i]){
                if(st.top().second==(k-1)){
                    for(int j=0;j<k-1;j++){
                        st.pop();
                    }
                }
                else{
                    st.push({s[i],st.top().second+1});
                }
            }
            else{
                st.push({s[i],1});
            }
        }
        i++;
    }
    s=" ";
    while (!st.empty())
    {
        s= st.top().first+s;
        st.pop();
    }
    return s;
    
    

}

int main(){
   cout<<remove("pbbcggttciiippooaais",2);
}
