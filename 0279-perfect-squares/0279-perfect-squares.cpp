class Solution {
public:
int arr[10001];
    int helper(int n){
         if(n==0) return 0;
        if(arr[n]!=-1)return arr[n];
    int result=INT_MAX;
    for(int i=1;i<=sqrt(n);i++){
        int ans = 1+helper(n-i*i);
        result= min(result,ans);

    }
    return arr[n]= result;
    }
    int numSquares(int n) {
        memset(arr,-1,sizeof(arr));
        return helper(n);
    }
 
};