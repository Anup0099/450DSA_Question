package stack;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class rotated {

    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> output = new ArrayList<>();
        int index = 0;
        solve(nums, ans, output, index);
        return ans;
    }

    private void solve(int[] nums,
                       List<List<Integer>> ans,
                       List<Integer> output,
                       int index) {
        if (index >= nums.length) {
            ans.add(output);
            return;
        }
        //exclude
        solve(nums, ans, output, index + 1);
        //include
        List<Integer>newoutput= new ArrayList<>(output);
        newoutput.add(nums[index] );
        solve(nums, ans, newoutput, index + 1);
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
//        int k = scn.nextInt(), n = scn.nextInt();
//        int temp = scn.nextInt();
//
//        int nod = 0;
//        while (temp > 0) {
//            temp = temp/10;
//            nod++;
//        }
//        int div = 1;
//        int mult = 1;
//        for (int i = 0; i <=nod ; i++) {
//            if (i<=k){
//                div = div*10;
//            }else{
//                mult = mult*10;
//            }
//        }
//        int q = n/div;
        int n = scn.nextInt();
//        for (int i = 1; i <=n ; i++) {
//            for (int j = 1; j <=i ; j++) {
//                System.out.print("*\t");
//            }
//            System.out.println();
//
//        }
//        for (int i = n; i >=1 ; i--) {
//            for (int j =1 ; j <i ; j++) {
//                System.out.print("*");
//            }
//            System.out.println();
//        }

    }
}
