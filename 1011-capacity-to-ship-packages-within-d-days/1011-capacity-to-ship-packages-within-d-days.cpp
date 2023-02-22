class Solution {
public:
   bool f(int mid,vector<int> &arr,int n,int days){
    int sum=0;
    int count=1;
    for(int i=0;i<n;i++){
        if(sum+arr[i]>mid){
            count++;
            sum=arr[i];
        }
        else{
            sum+=arr[i];
        }
    }
    if(count<=days)return true;
    else return false;
}
int shipWithinDays(vector<int> &arr, int days)
{
    int n = arr.size();
    int sum=0;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max)max=arr[i];
        sum+=arr[i];

    }
    int low= max;
    int high=sum;
    int ans;
    while(low<=high){
        int mid=(low+high)/2;
        if(f(mid,arr,n,days)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

};