package Array;

import java.util.ArrayList;

public class maxSubArray {
    static int maximumSumSubarray(int K, ArrayList<Integer> Arr, int N){
        // code here
        if (N<K){
            System.out.println("Invalid");
            return -1;
        }
        int maxSum=0;
        for (int i = 0; i <K ; i++) {
            maxSum += Arr.get(i);
        }
        int windowSum = maxSum;
        for (int i = K; i <N ; i++) {
            windowSum += Arr.get(i)-Arr.get(i-K);
            maxSum = Math.max(maxSum,windowSum);
        }
        return maxSum;

    }
    public static void main(String[] args) {

    }
}
