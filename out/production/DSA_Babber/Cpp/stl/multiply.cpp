#include <bits/stdc++.h>
using namespace std;

int findFinalValue(vector<int> &nums, int original)
{
    int ans = 0;
    sort(nums.begin(),nums.end());
    for (auto x : nums)
    {

        if (binary_search(nums.begin(), nums.end(), original))
        {
            original = original * 2;
        }
    }
    return original;
}

vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    // Your code goes here
        unordered_set<long long int>s;
        for (size_t i = 0; i < M; i++)
        {
            /* code */
            s.insert(B[i]);
        }
        vector<long long int>ans;
        for (size_t i = 0; i < N; i++)
        {
            /* code */
            if(s.find(A[i])==s.end()){
                ans.push_back(A[i]);
            }
        }
        return ans;
        
        
	} 
    int countCamelCase (string s)
    {
    	//code here.
        int ans = 0;
        for (size_t i = 0; i < s.size(); i++)
        {
            /* code */
            if(s[i]>='A' && s[i]<='Z'){
                ans++;
            }
        }
        return ans;
    	
    }
int main()
{   int N =6;
int M =5;
    long long A[N]={1, 2, 3, 4, 5, 10};
    long long B[M]={2, 3, 1, 0, 5};

    vector<long long int>vv =findMissing(A,B,M,N);
    for(auto x:vv){
        cout<<x;
    }
}