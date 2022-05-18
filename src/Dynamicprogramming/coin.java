package Dynamicprogramming;

public class coin {
  public static   int sliding(int []arr,int k){
        int n = arr.length;
        int max_sum = Integer.MIN_VALUE;
        for (int i = 0; i+k-1 <n ; i++) {
            int sum = 0;
            for (int j = 0; j < k ; j++) {
                sum += arr[j];
            }
            max_sum = Math.max(max_sum,sum);
        }
        return max_sum;
    }
    public static void main(String[] args) {
            int []arr = {1,8,30,-5,20};
            int k = 3;
        int ans = sliding(arr,k);
        System.out.println(ans);
    }


}
