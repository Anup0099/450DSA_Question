package Recursion;

import java.util.ArrayList;
import java.util.List;
//Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
//
//
//
//Example 1:
//
//Input: nums = [1,2,3]
//Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
public class PrintAllpermutation {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>>ans = new ArrayList<>();
        List<Integer>ds = new ArrayList<>();
        boolean freq[]= new boolean[nums.length];
        recurpermute(nums,ds,ans,freq);
        return ans;

    }

    private void recurpermute(int[] nums,
                              List<Integer> ds,
                              List<List<Integer>> ans,
                              boolean[] freq) {

        if (ds.size()== nums.length){
            ans.add(new ArrayList<>(ds));
            return;

        }
        for (int i = 0; i < nums.length ; i++) {
            if (!freq[i]){
                freq[i]=true;
                ds.add(nums[i]);
                recurpermute(nums, ds, ans, freq);
                ds.remove(ds.size()-1);
                freq[i]=false;
            }
        }
    }

    public static void main(String[] args) {

    }
}
