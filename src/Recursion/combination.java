package Recursion;

import java.io.*;
import java.util.*;

public class combination {

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

   private static void find(int ind,
                     int arr[],
                     int target,
                     List<List<Integer>> ans,
                     List<Integer> ds) {
        if (ind == arr.length) {
            if (target == 0) {
                ans.add(new ArrayList<Integer>(ds));
            }
            return;
        }
        if(arr[ind]<=target){
            ds.add(arr[ind]);
            find(ind , arr, target - arr[ind], ans, ds);//pick the element  at index ind
            ds.remove(ds.size() - 1);

        }
        find(ind + 1, arr, target, ans, ds);    //don't pick the element at index ind

    }

    public static List<List<Integer>> combinations(int sum[],
                                                   int target) {
        List<List<Integer>> ans = new ArrayList<List<Integer>>();
        List<Integer> ds = new ArrayList<Integer>();
        find(0, sum, target, ans, ds);
        return ans;
    }

    public static void main(String[] args) throws Exception {
        FastReader sc = new FastReader();
        int n = sc.nextInt();
        int k = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        List<List<Integer>> ans = combinations(arr, k);

        for (List<Integer> l : ans) {
            for (int i : l) {
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }

}