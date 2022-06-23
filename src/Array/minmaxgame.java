package Array;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class minmaxgame {
    public static int minMaxGame(int[] nums) {
        List<Integer> list = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            if (i % 2 == 0) {
                list.add(Math.min(nums[2 * i], nums[2 * i + 1]));

            } else if (
                    i % 2 != 0) {
                list.add(Math.max(nums[2 * i], nums[2 * i + 1]));
            }
        }

        return list.get(list.size() - 1);


    }



   static Scanner in = new Scanner(System.in);
    static int N = 50010;
    static int[] a = new int[N], b = new int[N];
    static void X(int n)
    {
        if (n > 1){
            X(n/2);

        }

        System.out.print(n % 2);
    }



    public static void main(String[] args) {
        double myVal = 7.4557;
        Integer notMyVal = (int)Math.ceil(myVal);
        System.out.println(notMyVal);
    }

    static void solve() {
        int n = in.nextInt();
        for (int i = 1; i <= n; i++) a[i] = in.nextInt();
        for (int i = 1; i <= n; i++) b[i] = in.nextInt();
        boolean ok = true;
        int mx = 0;
        for (int i = 1; i <= n; i++) mx = Math.max(mx, a[i] - b[i]);
        for (int i = 1; i <= n; i++) {
            if (b[i] != Math.max(a[i] - mx, 0)) ok = false;
        }
        if (ok) System.out.println("YES");
        else System.out.println("NO");
    }


}
