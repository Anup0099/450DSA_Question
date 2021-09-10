package Hashing;

import java.util.HashMap;

public class SubarraySum {
    public static void main(String[] args) {

    }

    static int countSubarray(int[] a, int n, int target) {
        int result = 0;
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
        int current = 0;
        for (int i = 0; i < n; i++) {
            if (current == target){
                result++;
            }
            current += a[i];
            int frequency = map.getOrDefault(current - target, 0);
            result += frequency;
            map.put(current, map.getOrDefault(current, 0) + 1);
        }
        return result;
    }
}
