class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int n=prices.size();
    vector<int> pft(n,0);
    int mxval=prices[n-1];
    
    for(int i=n-2;i>=0;i--){
        if(prices[i]>mxval) mxval=prices[i];
        
        pft[i]=max(pft[i+1],mxval-prices[i]);
    }
    int mnval=prices[0];
    
    for(int i=1;i<n;i++){
        if(prices[i]<mnval) mnval=prices[i];
        
        pft[i]=max(pft[i-1],pft[i]+(prices[i]-mnval));
    }
    return pft[n-1];
    }
};