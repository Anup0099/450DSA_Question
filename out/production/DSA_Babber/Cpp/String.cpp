#include <bits/stdc++.h>
using namespace std;



int n,ans;
vector<int>a;
void count_peak(){
    for (size_t i = 1; i < n-1; i++)
    {
        /* code */
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
            ans++;
        }
        if(a[i]<a[i-1]&&a[i]<a[i+1]){
            ans++;
        }

        

    }
}
void recurse(int i=0){
    if(i==n){
        count_peak();
        return;
    }
    for(auto num:a){
        a[i]=num;
        recurse(i+1);
    }
}
int main(){
    // int n;
    // cin>>n;
    // while (n--)
    // {
    //     /* code */
    //     int t;
    //     cin>>t;
    //     string s;
    //     cin>>s;
    //     string d = "code";
    //     string c ="chef";
        
    //     size_t found = s.find(c);
    //     size_t found1 = s.find(d);
    //     // if (found != string::npos)
    //     // cout << "First occurrence is " << found << endl;
    //     if(found1>found){
    //             cout<<"WA"<<endl;
    //         }else{
    //             cout<<"AC"<<endl;
    //         }
        
       
    // }
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        ans=0;
        a.resize(n);
        recurse();
        cout<<ans<<endl;

    }
    
}