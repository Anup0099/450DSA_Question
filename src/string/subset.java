package string;

import java.util.ArrayList;
import java.util.List;

public class subset {
    public static void main(String[] args) {
        subseq("", "abc");
        int []arr = {1,2,3};
        List<List<Integer>>ans = subset(arr);
        for (List<Integer>list:ans){
            System.out.println(list);


        }
    }

    static void subseq(String p,
                       String up) {
        if (up.isEmpty()) {
            System.out.println(p);
            return;
        }
        char ch = up.charAt(0);
        subseq(p + ch, up.substring(1));
        subseq(p, up.substring(1));

    }

    static List<List<Integer>> subset(int[] arr) {
        List<List<Integer>> outer = new ArrayList<>();
        outer.add(new ArrayList<>());
        for (int num :
                arr) {
            int n = outer.size();
            for (int i = 0; i < n; i++) {
                List<Integer> internal = new ArrayList<>(outer.get(i));
                internal.add(num);
                outer.add(internal);


            }

        }
        return outer;
    }
}
