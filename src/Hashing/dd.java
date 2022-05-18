package Hashing;

import java.util.HashMap;
import java.util.Scanner;
//Given n integers a1,a2,…,an. You can perform the following operation on them:
//
//        select any element ai (1≤i≤n) and divide it by 2 (round down). In other words, you can replace any selected element ai with the value ⌊ai2⌋ (where ⌊x⌋ is – round down the real number x).
//        Output the minimum number of operations that must be done for a sequence of integers to become strictly increasing (that is, for the condition a1<a2<⋯<an to be satisfied). Or determine that it is impossible to obtain such a sequence. Note that elements cannot be swapped. The only possible operation is described above.
//
//        For example, let n=3 and a sequence of numbers [3,6,5] be given. Then it is enough to perform two operations on it:
//
//        Write the number ⌊62⌋=3 instead of the number a2=6 and get the sequence [3,3,5];
//        Then replace a1=3 with ⌊32⌋=1 and get the sequence [1,3,5].
//        The resulting sequence is strictly increasing because 1<3<5.

public class dd {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            int[] b = new int[n];
            for (int i = 0; i < n; i++) {
                b[i] = a[i];
            }
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (b[i] % 2 == 0) {
                    b[i] = b[i] / 2;
                    count++;
                }
            }
            int flag = 0;
            for (int i = 0; i < n - 1; i++) {
                if (b[i] > b[i + 1]) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) {
                System.out.println(count);
            } else {
                System.out.println(-1);
            }
        }

    }
}
