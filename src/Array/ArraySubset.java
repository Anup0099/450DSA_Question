package Array;

import java.util.Arrays;

public class ArraySubset {
    public static void main(String[] args) {
    int arr[] = {1,5,6};
//    for (int i = 0; i <arr.length; i++) {
//        for (int j = i + 1; j<arr.length;j++){
//            for (int k = 0; k <=j ; k++) {
//                System.out.println(arr[k]+" ");
//            }
//            System.out.println();
//        }
//    }
        System.out.println(set(arr));
    }
    static int set(int []arr){
        int limit = (int)Math.pow(2,arr.length);
        for (int i = 0; i <limit ; i++) {
            String set = "";
            int temp =i;
            for (int j = arr.length-1; j >=0  ; j--) {
                int r =temp%2;
                temp =temp/2;

                if (r==0){
                    set ="_" + set;
                }else{
                    set = arr[j]+set;
                }
            }
            System.out.println(set);
        }
        return -1;
    }
    
}
