#include <bits/stdc++.h>
using namespace std;

void permute(string str,int l,int r){
    if(l==r){
        cout<<str<<" "<<r<<endl;
    }else{
        for(int i=0;i<=r;i++){
            swap(str[l],str[i]); 
            permute(str,l+1,r);
            swap(str[l],str[i]);
        }
    }

}
void fun(int n){
    if(n==0){
        return ;
    }
    cout<<n;
    fun(n-1);
}
// // string removeDigit(string number, char digit) {
//     string s="";
//     for(int i=0; i<number.length();i++){
//         if(number[i]==digit){
//             continue;
//         }
//         s += number[i];
//     }
//     return s;
        
//     }

     string convert(int ind,string nums){
        return nums.erase(ind,1);
    }
    
    string removeDigit(string nums, char digit) {
        string res;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == digit)
                res = max(res,convert(i,nums));
        }
        return res;
    }
int main(){
        cout<<removeDigit("123",'3');
}