#include <bits/stdc++.h>
using namespace std;
// void print(int *arr ,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void fillArray(int *arr,int n,int val){
//     if (i==n)
//     {
//         /* code */
//         print(arr,n);
//         return;
//     }
//     arr[i]=val;
//     fillArray(arr,n,val+1);

// }
// // N is the number of pairs of parentheses
// // Return list of all combinations of balanced parantheses
// void solve(int close,int open,op,vector<string>&v){
//     if(close==0 && open==0){
//         v.push_back(op);
//         return;
//     }
//     if(close>0){
//         v[op]=')';
//         solve(close-1,open,op+1,v);
//     }
//     if(open!=0){
//        string op1=op;
//          op1.push_back('(');
//         solve(close,open-1,op+1,v);
//     }
// }
//  vector<string> AllParenthesis(int n)

//     {
//         // Your code goes here
//         vector<string>v;
//         string op="";
//         int open=n;
//         int close= n;
//      solve(close,open,op,v);
//         return v;

//     }

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> v;
    vector<int> v1;
    v.push_back(v1);
    for (int i = 0; i < nums.size(); i++)
    {
        int size = v.size();
        for (int j = 0; j < size; j++)
        {
            vector<int> v2 = v[j];
            v2.push_back(nums[i]);
            v.push_back(v2);
        }
    }
    return v;
}
int main()
{
vector<int> v={1,2,3};
vector<vector<int>> v1=subsets(v);
for(int i=0;i<v1.size();i++){
    for(int j=0;j<v1[i].size();j++){
        cout<<v1[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}
  