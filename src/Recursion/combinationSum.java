package Recursion;

import java.util.ArrayList;
import java.util.List;

public class combinationSum {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>>ans = new ArrayList<>();

        findConbination(0,candidates,target,ans,new ArrayList<>());
        return ans;
    }

    private void findConbination(int index,int[]arr,int target,
                                 List<List<Integer>>ans,List<Integer>ds) {
        if (index== arr.length){
            if (target==0){
                ans.add(ds);

            }
            return;
        }
        if (arr[index]<=target){
            ds.add(arr[index] );
            findConbination(index,arr,target-arr[index],ans,ds);
            ds.remove(ds.size()-1);

        }
        findConbination(index+1,arr,target,ans,ds);

    }

    public static void main(String[] args) {

    }

}
