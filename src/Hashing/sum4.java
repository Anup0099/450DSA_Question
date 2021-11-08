package Hashing;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class sum4 {
    public static void main(String[] args) {
        int[] nums = {1, 0, -1, 0, -2, 2};
        int target = 0;
        System.out.println(summs(nums,target));
    }

    static List<List<Integer>> summs(int[] nums, int target) {
        ArrayList<List<Integer>> res = new ArrayList<List<Integer>>();
        if (nums == null || nums.length == 0) {
            return res;
        }
        int n = nums.length;
        Arrays.sort(nums);
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int target_2 = target - nums[i] - nums[j];
                int front = j + 1;
                int back = n - 1;
                while (front < back) {
                    int two_sum = nums[front] + nums[back];
                    if (two_sum < target_2) front++;
                    else if (two_sum > target_2) back--;
                    else {
                        List<Integer> quad = new ArrayList<Integer>();
                        quad.add(nums[i]);
                        quad.add(nums[j]);
                        quad.add(nums[front]);
                        quad.add(nums[back]);
                        res.add(quad);

                        while (front < back && nums[front] == quad.get(2)) ++front;
                        while (front < back && nums[back] == quad.get(3)) --back;
                    }
                }
                while (j + 1 < n && nums[j + 1] == nums[j]) ++j;

            }
            while (i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
        return res;
    }
}
