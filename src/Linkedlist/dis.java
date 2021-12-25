package Linkedlist;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class dis {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int n = nums.length;

        int ans = 0;

        List<Integer> list1 = new ArrayList<>();
        Arrays.sort(nums);
        for (int i = 0; i < n; i++) {
            if (nums[i] != nums[i + 1]) {
                list1.add(nums[i + 1]);
            }

        }

        return list1;


    }

    public static int ans(int arrr[]) {
        int un = 0;
        for (int n : arrr
        ) {
            un ^= n;

        }
        return un;
    }
public static String arm(int n){
    // code here
    int sum =0;
    int temp =n;
    int r;
    while(n>0){
        r = n%10;
        n = n/10;
        sum = sum + r*r*r;

    }
    if(temp == sum){
        return("yes");
    }
    else{
        return ("no");
    }

}
    public static void main(String[] args) {
        int[] arrr = {2, 2, 3, 3, 6};
        System.out.println(ans(arrr));
        System.out.println(arm(153));
    }
}
