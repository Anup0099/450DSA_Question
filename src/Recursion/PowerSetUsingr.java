package Recursion;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class PowerSetUsingr {
    public static ArrayList<ArrayList<Integer>> subsets(ArrayList<Integer> A) {
        //code here
        ArrayList<ArrayList<Integer>> result = new ArrayList<>();
        ArrayList<Integer> curr = new ArrayList<>();
        helper(A, 0, curr, result);
        result.sort((a, b) -> {
            if (a.size() == b.size()) {
                return a.toString().compareTo(b.toString());
            } else {
                return a.size() - b.size();
            }
        });
        return result;
    }

    private static void helper(ArrayList<Integer> a,
                               int i,
                               ArrayList<Integer> curr,
                               ArrayList<ArrayList<Integer>> result) {
        if (i == a.size()) {
            result.add(new ArrayList<>(curr));
            return;
        }
        //include
        curr.add(a.get(i));
        helper(a, i + 1, curr, result);
        //exclude
        curr.remove(curr.size() - 1);
        helper(a, i + 1, curr, result);

    }

    public static void main(String[] args) {
        ArrayList<Integer> A = new ArrayList<>(Arrays.asList(1, 2, 3));
        ArrayList<ArrayList<Integer>> result = subsets(A);
        System.out.println(result);
    }
}
