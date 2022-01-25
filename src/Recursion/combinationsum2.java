package Recursion;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class combinationsum2 {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>>ans = new ArrayList<>();
        Arrays.sort(candidates);
        findCombunation(0,candidates,target,ans,new ArrayList<>());
        return ans;
    }

    private void findCombunation(int index,int []arr,int target,
                                 List<List<Integer>>ans,List<Integer>ds) {
        List<Integer>ds2= new ArrayList<>(ds);
        if (target==0){
            ans.add(ds2);
            return;
        }
        for (int i = index; i <arr.length ; i++) {
            if (i>index && arr[i]==arr[i-1])continue;
            if (arr[i]>target)break;
            ds.add(arr[i]);
            findCombunation(i+1,arr,target-arr[i],ans,ds);
            ds.remove(ds.size()-1);
        }
    }
//K-th Element of two sorted arrays
//Problem Statement: Given two sorted arrays of size m and n respectively, you are tasked with finding the element that would be at the kth position of the final sorted array.
public double findMedianSortedArrays(int[] nums1, int[] nums2) {
    int[] arr = new int[nums1.length + nums2.length];
    System.arraycopy(nums1, 0, arr, 0, nums1.length);
    System.arraycopy(nums2, 0, arr, nums1.length, nums2.length);
    Arrays.sort(arr);
    if(arr.length%2 != 0)
        return (double)arr[arr.length/2];
    else
        return (double) (arr[arr.length/2] + arr[arr.length/2 -1])/2;
}
    public static void main(String[] args) {
       int [] array1 = {2,3,6,7,9};
       int [] array2 = {1,4,8,10};
       int  k = 1;
        System.out.println(array1[k]);

    }
}
