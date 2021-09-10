package Sorting;

import java.util.Arrays;

public class Findmissinng {
    public static void main(String[] args) {
        int []arr = {9,6,4,2,3,5,7,0,1};
        System.out.println(insertion(arr));
    }
    static int insertion(int[]arr){
         Arrays.sort(arr);
         int n = arr.length;
        int sum = n * (n+1)/2;
        int sum1 = 0;
        for (int i = 0; i <n ; i++) {
            sum1 += arr[i];
        }
        int ans = sum - sum1;


        return ans;
    }

}
