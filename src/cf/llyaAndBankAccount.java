package cf;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;

public class llyaAndBankAccount {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(
                    new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                if (st.hasMoreTokens()) {
                    str = st.nextToken("\n");
                } else {
                    str = br.readLine();
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }

    public static void main(String[] args) {
//        FastReader fr = new FastReader();
//        int n = fr.nextInt();
//        String s = String.valueOf(n);
//        String ans = "";
//        if (n >= 0) {
//            System.out.println(n);
//        }
//        else if(n<0 && n%10==0){
//            System.out.println(0);
//        }
//        else {
//            for (int i = 0; i < s.length() - 1; i++) {
//                ans = ans + s.charAt(i);
//            }
//        }
//        System.out.println(ans);

                long i = new Scanner(System.in).nextLong();
                if(i < 0)
                    i = Math.max(i/100*10 + i%10, i/10);
                System.out.print(i);

        }
    }


