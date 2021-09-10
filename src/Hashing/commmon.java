package Hashing;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Scanner;

public class commmon {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n1 = Integer.parseInt(br.readLine());
        int []a1 = new int[n1];
        for (int i = 0; i < n1 ; i++) {
            a1[i] = Integer.parseInt(br.readLine());
        }
        int n2 = Integer.parseInt(br.readLine());
        int []a2 = new int[n2];
        for (int i = 0; i < n2; i++) {
            a2[i] = Integer.parseInt(br.readLine());
        }
        HashMap<Integer, Integer>fmap = new HashMap<Integer, Integer>();
        for (int val:a1
             ) {
            if (fmap.containsKey(val)) {
                int of = fmap.get(val);
                int nf = of +1;
                fmap.put(val,nf);
            }   else {
                fmap.put(val,1);
            }
        }
        for (int val:a2) {
            if (fmap.containsKey(val) && fmap.get(val)>0) {
                System.out.println(val);
                int of = fmap.get(val);
                int nf=of-1;
                fmap.put(val,nf);
            }
        }
    }
}
