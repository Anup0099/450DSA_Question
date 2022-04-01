class binary{
    public static void main(String[] args) {
        int []nums = {-1,0,3,5,9,12};
        int target = 5;
        int ans = binarySearch(nums,target);
        System.out.println(ans);
    }
    static int binarySearch(int[]nums,int target){
        int start = 0;
        int end = nums.length - 1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]>target){
                end = mid - 1;
            }
            if(nums[mid]<target){
                start = mid + 1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }        
}