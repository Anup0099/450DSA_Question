package Recursion;

import java.util.ArrayList;
import java.util.Collections;

public class SubsetSum {
    static void func(int ind,
                     int sum,
                     ArrayList<Integer> arr,
                     int N,
                     ArrayList<Integer> sumSubset) {
        if (ind == N) {
            sumSubset.add(sum);
            return;
        }

        // pick the element
        func(ind + 1, sum + arr.get(ind), arr, N, sumSubset);

        // Do-not pick the element
        func(ind + 1, sum, arr, N, sumSubset);
    }

    public static ArrayList<Integer> subsetSums(ArrayList<Integer> arr,
                                                int N) {
        ArrayList<Integer> sumSubset = new ArrayList<>();
        func(0, 0, arr, N, sumSubset);
        Collections.sort(sumSubset);
        return sumSubset;
    }

    public static void main(String[] args) {

        ArrayList<Integer> arr = new ArrayList<>();
        arr.add(1);
        arr.add(2);
        arr.add(3);
        arr.add(4);
        arr.add(5);
        System.out.println(subsetSums(arr, 5));


    }

    static int subset(int[] arr,
                      int n,
                      int i,
                      int sum) {
        //base
        if (i == n) {
            if (sum == 0) return 1;
            return 0;
        }
        int inc = subset(arr, n, i + 1, sum - arr[i]);
        int ex = subset(arr, n, i + 1, sum);
        return ex + inc;
    }

}
