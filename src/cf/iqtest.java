package cf;

import java.util.Scanner;

public class iqtest {
    public static void main(String[] args) {
        int even = 0, odd = 0;
        Scanner t = new Scanner(System.in);
        int x;
        x = t.nextInt();
        for (int i = 1; i <= x; i++) {
            if (t.nextInt() % 2 != 0) odd = odd + i;
            else even = even + i;
        }
        System.out.println(Math.min(even, odd));
    }
}
