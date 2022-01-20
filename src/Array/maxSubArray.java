package Array;

import java.util.ArrayList;
import java.util.Collections;
import java.util.PriorityQueue;

public class maxSubArray {
    static int maximumSumSubarray(int K,
                                  ArrayList<Integer> Arr,
                                  int N) {
        // code here
        if (N < K) {
            System.out.println("Invalid");
            return -1;
        }
        int maxSum = 0;
        for (int i = 0; i < K; i++) {
            maxSum += Arr.get(i);
        }
        int windowSum = maxSum;
        for (int i = K; i < N; i++) {
            windowSum += Arr.get(i) - Arr.get(i - K);
            maxSum = Math.max(maxSum, windowSum);
        }
        return maxSum;

    }

    public static ArrayList<Integer> kLargest(int arr[],
                                              int n,
                                              int k) {
        // code here
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for (int i = 0; i < n; i++) {
            if (i < k) {
                pq.add(arr[i]);
            } else {
                if (arr[i] > pq.peek()) {
                    pq.remove();
                    pq.add(arr[i]);
                }
            }
        }
        ArrayList<Integer> ans = new ArrayList<>();
        while (pq.size() > 0) {
            ans.add(pq.remove());

        }
        Collections.sort(ans, Collections.reverseOrder());
        return ans;


    }



    public static void main(String[] args) {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        int arr[] = {22, 223, 54, 65, 89};
        for (int ranks : arr
        ) {
            pq.add(ranks);
        }
        while (pq.size() > 0) {
            System.out.println(pq.peek());
            pq.remove();
        }
    }
}
