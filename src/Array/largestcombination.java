package Array;

public class largestcombination {
   static int subarray(int []arr,int k){
        int res =arr[0];
        for (int i = 0; i <arr.length ; i++) {
            int curr =0;
            for (int j = i; j <arr.length ; j++) {
                curr = curr+arr[i];
            }
             res = Math.max(curr,res);
        }
        return res;
    }
    public int findMaxConsecutiveOnes(int[] nums) {
        int max =0;
        int curr =0;
        for (int i = 0; i <nums.length ; i++) {
            if(nums[i]==1){
                curr++;
                max = Math.max(max,curr);
            }else{
                curr=0;
            }
        }
        return max;
    }
    public static void main(String[] args) {
        int []arr ={1,-2,3,-1,2};
        System.out.println(subarray(arr,5));
    }
}
