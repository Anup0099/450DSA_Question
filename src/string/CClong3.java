package string;

import java.util.Scanner;

public class CClong3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        while (n-->0){
            int t=scanner.nextInt();
            int even=0;
            int odd=0;
            for (int i = 0; i <t ; i++) {
                long x = scanner.nextLong();
                if (x%2==0){
                    even++;
                }else {
                    odd++;
                }
            }
            int ans = Math.min(even,(t+1)/2);
            int an2 = Math.min(odd,t/2);

            System.out.println(ans + an2);
        }

    }
}
