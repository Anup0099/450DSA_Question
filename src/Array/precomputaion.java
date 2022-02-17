package Array;

import java.util.Arrays;
import java.util.Scanner;

public class precomputaion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int m = (int) (1e5 + 10);
        long[] facto = new long[m];
        facto[0] = facto[1] = 1;
        for (int i = 2; i < m; i++) {
            facto[i] = facto[i - 1] * i;
        }
        while (t-- > 0) {
            int n = sc.nextInt();


            System.out.println(facto[n]);
        }
    }
}
