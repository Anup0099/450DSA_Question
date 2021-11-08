package Binary;

import java.util.Arrays;
import java.util.Scanner;

public class AggCows {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int cows = sc.nextInt();
            int nums[]=new int[n];
            for (int i=0; i<n; i++) {nums[i] = sc.nextInt();}
            Arrays.sort(nums);
            int low =1,high =nums[n-1]-nums[0];
            while (low<=high){
                int mid =(low+high)>>1;
                if (aggcow(nums,n,cows,mid)){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
            System.out.println(high);

        }

    }

    static boolean aggcow(int[] nums, int n, int cows, int minDist) {
        int countcows = 1;
        int lastPlacedcows = nums[0];

        for (int i = 0; i < n; i++) {
            if (nums[i] - lastPlacedcows >= minDist) {
                countcows++;
                lastPlacedcows = nums[i];
            }

        }
        if (countcows >= cows) return true;
        return false;

    }

}
