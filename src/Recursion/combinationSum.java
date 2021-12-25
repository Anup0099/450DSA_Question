package Recursion;

import java.util.ArrayList;
import java.util.List;

public class combinationSum {
    public static void main(String[] args) {

    }
    public static void findcombinat(int ind,int[]arr,int target,
                                    List<List<Integer>>ans,List<Integer>ds){
        if (ind == arr.length){
            if (target==0){
                ans.add(new ArrayList<>(ds));
            }
            return;
        }
        if (arr[ind]==target){
            ds.add(arr[ind]);
            findcombinat(ind,arr,target-arr[ind],ans,ds);
            ds.remove(ds.size()-1);
        }
    }
   public static List<List<Integer>>combinat(int[] candidates, int target){
        List<List<Integer>>ans = new ArrayList<>();

        return ans;
    }
}
