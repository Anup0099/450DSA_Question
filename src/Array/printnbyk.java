package Array;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class printnbyk {
    public static void printbyn(int arr[],
                                int k) {
        HashMap<Integer, Integer> m = new HashMap<Integer, Integer>();
        for (int x : arr) {

            m.put(x, m.getOrDefault(x, 0) + 1);
        }
        for (Map.Entry<Integer, Integer> e : m.entrySet())
            if (e.getValue() > arr.length / k) {
                System.out.println(e.getKey() + " ");
            }
    }
    public static List<Integer> majorityElement(int[] nums) {
        HashMap<Integer, Integer> m = new HashMap<Integer, Integer>();
        ArrayList<Integer>li = new ArrayList<>();
        for (int x : nums) {

            m.put(x, m.getOrDefault(x, 0) + 1);
        }
        for (Map.Entry<Integer, Integer> e : m.entrySet())
            if (e.getValue() > nums.length / 3) {
                li.add(e.getKey());
            }

        return  li;

    }
    public static void main(String[] args) {
        int arr[] = {10, 20, 30, 10, 10, 20};
        int k = 3;
        printbyn(arr, k);
    }
}
