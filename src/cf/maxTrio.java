package cf;

import java.util.Arrays;
import java.util.Scanner;

public class maxTrio {
    public static int sums(int n){
            if (n==0){
                return 0;
            }
        return (n%10)+sums(n/10);
    }
    public static void main(String[] args) {
//        Scanner scn = new Scanner(System.in);
//        int t = scn.nextInt();
//        while (t-- > 0) {
//            int n = scn.nextInt();
//            int arr[] = new int[n];
//            for (int i = 0; i < arr.length - 1; i++) {
//                arr[i] = scn.nextInt();
//            }
//            Arrays.sort(arr);
//
//            if (arr.length < 3) {
//                return;
//            }
//
//            int first = arr[0];
//            int last = arr[arr.length - 1];
//            int secondlast = arr[arr.length - 2];
//
//            int ans = ((last - first) * secondlast);
//
//
//
//    }
        System.out.println(sums(85));

}
}

