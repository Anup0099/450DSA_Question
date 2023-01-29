
class nonDecreasingArray {
    public boolean checkPossibility(int[] nums) {
        int count = 0;
        for (int i=1;i<nums.length;i++) {
            if (nums[i-1] > nums[i]) {
                count++;
                if(i>=2 && nums[i-2]>nums[i])nums[i]=nums[i-1];
            }else{
                nums[i-1]=nums[i];
            }
        }
        return count<=1;
       
    }

    public static void main(String[] args) {

    }
}