package cf;

import java.util.Scanner;

public class mimumDiffficulty {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n],d=0,m=1001;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();

        }
        for (int i = 1; i < n ; i++) {
            d=Math.max(d,arr[i]-arr[i-1]);
        }
        for (int i = 1; i < n-1 ; i++) {
            m=Math.min(m,Math.max(d,arr[i+1]-arr[i-1]));
        }
        System.out.println(m);
        sc.close();
    }
}
