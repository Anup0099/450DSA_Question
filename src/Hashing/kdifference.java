package Hashing;

import java.util.*;

public class kdifference {
    public static int countKDifference(int[] nums,
                                       int k) {
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (Math.abs(nums[i] - nums[j]) <= k) {
                    count++;
                }
            }
        }
        return count;
    }

    public static int countKDifferences(int[] nums,
                                        int k) {
        int count = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            Integer key = entry.getKey() - k;
            if (map.containsKey(key)) {
                count += map.get(key) * map.get(entry.getKey());
            }

        }
        return count;
    }

    public static int []  removeDuplicates(int[] arr){
        int i=0;
        for (int j = 0; j < arr.length; j++) {
            if (arr[i]!=arr[j]){
                i++;
                arr[i]=arr[j];
            }
        }
        return arr;
    }
        public static void main (String[]args){
           
        }
    }
