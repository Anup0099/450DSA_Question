class Solution {
   private int binarySearchCount(int arr[], int n, int key){
        int left = 0;
        int right = n - 1;
        int count = 0;

        while (left <= right){
            int mid = (right + left) / 2;
            if (arr[mid] <= key){
                count = mid + 1;
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return count;
    }
    
    public List<Long> minOperations(int[] nums, int[] queries) {
        Arrays.sort(nums);
        int n = nums.length;
        long[] pre = new long[n+1];
        pre[1] = nums[0];
        for(int i=1;i<n;i++){
            pre[i+1] =  pre[i] + nums[i];
        }
        List<Long> ans = new ArrayList<>();
        int m = queries.length;
        
        for(int i=0;i<m;i++){
            int target = queries[i];
            int smallElementCt = binarySearchCount(nums, n , target);
            long currAns = 0;
            currAns = ((long)smallElementCt*(long)target) - pre[smallElementCt];
            int largeElementCt =  n- smallElementCt;
            currAns += pre[n] - pre[n-largeElementCt] - ((long)largeElementCt*(long)target);
            ans.add(currAns);
        }
        return ans;
    }
}