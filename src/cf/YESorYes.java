package cf;

import java.util.Scanner;

public class YESorYes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while (n-- > 0) {
            String s = sc.next();
            if (s.equals("YES") || s.equals("yes") || s.equals("Yes") || s.equals("yEs") || s.equals("yeS")
                    || s.equals("YEs") || s.equals("yES") ||s.equals("YeS")) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
