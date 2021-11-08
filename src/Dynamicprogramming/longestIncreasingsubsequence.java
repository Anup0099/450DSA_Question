package Dynamicprogramming;

import java.io.*;
import java.util.*;

public class longestIncreasingsubsequence {

    public static void main(String[] args) throws Exception {
        // write your code here
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < scn.nextInt(); i++) {
            arr[i] = scn.nextInt();

        }
        int[] dp = new int[n];
        dp[0] = 1;
        for (int i = 0; i < dp.length; i++) {
            int max = 0;
            for (int j = 0; j < i; j++) {
                if (arr[j] < arr[i]) {
                    if (dp[j] > max) {
                        max = dp[j];
                    }
                }
            }
            dp[i] = max + 1;
        }

    }

}