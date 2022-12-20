class Solution {
public:
  long long merge(vector<int>& arr,vector<int>& tmp,int l,int mid,int r){
        int i=l;
        int j=mid+1;
        long long inv=0;
        // loop to count valid pairs before merging sorted array
        for(i=l;i<=mid;i++){
            while(j<=r && arr[i]>(2*(long)arr[j]))
            j++;
            inv+=(j-mid-1);
        }
        j=mid+1;
        i=l;
        int k=l;
        // merging sorted array
        while(i<=mid && j<=r){
            if(arr[i] > arr[j]){
                tmp[k++]=arr[j++];
            }
            else{
                tmp[k++]=arr[i++];
            }
        }
        while(i<=mid){
            tmp[k++]=arr[i++];
        }
        while(j<=r){
            tmp[k++]=arr[j++];
        }
        for(i = l ; i <= r ; i++)
            arr[i] = tmp[i];
        return inv;
    }
    
    
    long long merge_sort(vector<int>& arr,vector<int>& tmp,int l,int r){
        long long inv=0;
        if(l<r){
            int m=(r+l)/2;
            inv+=merge_sort(arr,tmp,l,m);
            inv+=merge_sort(arr,tmp,m+1,r);
            inv+=merge(arr,tmp,l,m,r);
        }
        return inv;
    }
    
    int reversePairs(vector<int>& nums) {
        vector<int> tmp(nums.size());
        return merge_sort(nums,tmp,0,nums.size()-1);

    }
};