package Array;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;

public class IntersectionofTwoarray {
    public static int[] intersection(int[] a,
                                        int[] b) {
        int res = 0;
        int k=0;

        int arr[]= new int[1001];
        for (int i = 0; i < a.length; i++) {
            boolean flag = false;
            for (int j = 0; j < i - 1; j++) {

                if (a[i] == a[j]) {
                    flag = true;
                    break;

                }
            }
            if (flag) {
                continue;
            }
            for (int j = 0; j < b.length; j++) {
                if (a[i] == b[j]) {
                    res++;
                    arr[k]=a[i];
                    k++;
                    break;
                }
            }

        }

//        convert List into int[];
//        for (int i = 0; i < arr.length ; i++) {
//            arr[k]=a[i];
//            k++;
//        }
        return arr;

    }

    public static int[] toIntArray(List<Integer> list) {
        int[] ret = new int[list.size()];
        for (int i = 0; i < ret.length; i++)
            ret[i] = list.get(i);
        return ret;
    }
    public static int[] inter(int nums1[],int nums2[]){
        HashSet<Integer>s = new HashSet<>();
        List<Integer>l=new ArrayList<>();
        for (int x:nums1
             ) {
            s.add(nums1[x]);

        }
        for (int i = 0; i < nums2.length ; i++) {
         if (s.contains(nums2[i])){
             l.add(nums2[i] );
             s.remove(nums2[i]);

         }
        }
        int[] result = new int[s.size()];
        int index = 0 ;
        for(int i:s){
            result[index++]=i;
        }

        return result;
    }





    public static void main(String[] args) {
        int arr[] = {10, 15, 20, 15, 30, 30, 5};
        int arr2[] = {30, 5, 3, 80};
        System.out.println(Arrays.toString(intersection(arr, arr2)));
    }
}
