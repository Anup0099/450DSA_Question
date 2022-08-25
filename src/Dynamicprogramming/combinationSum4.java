//package Dynamicprogramming;
//
//import java.util.HashMap;
//import java.util.Map;
//
///**
// * combinationSum4
// */
//public class combinationSum4 {
//    static Map<Integer, Integer> m = new HashMap<Integer, Integer>();
//
//    public static int combinationSum4(int[] nums,
//                                      int target) {
//        return heliper(nums, target);
//
//    }
//
//    private static int heliper(int[] nums,
//                               int target) {
//        if (m.containsKey(target)) {
//            return m.get(target);
//        }
//        if (target == 0) {
//            return 1;
//        } else if (target < 0) {
//            return 0;
//        } else {
//            int possibleWays = 0;
//            for (int it : nums) {
//                possibleWays += heliper(nums, target - it);
//            }
//            m.put(target, possibleWays);
//            return possibleWays;
//        }
//    }
//
//    public static void main(String[] args) {
//        int[] nums = {1, 2, 3};
//        System.out.println(combinationSum4(nums, 4));
//    }
//}