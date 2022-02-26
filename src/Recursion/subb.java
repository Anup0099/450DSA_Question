package Recursion;

import java.util.ArrayList;

public class subb {
    void printf(int ind,
                ArrayList<Integer> arr,
                int[] arrr,
                int n) {
        if (ind == n) {
            for (int it : arrr
            ) {
                System.out.println(it);
            }
            if (arr.size() == 0) {
                System.out.println("{}");
            }
            System.out.println();
            return;
        }
        printf(ind + 1, arr, arrr, n);
        arr.add(arrr[ind]);
        printf(ind + 1, arr, arrr, n);
        arr.remove(arrr[ind]);
    }

    public static void main(String[] args) {
        int arr[] = {3, 1, 2};
        int n = 3;
        double v= Math.round(8.90);

    }
}
