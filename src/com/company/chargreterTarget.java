package com.company;

public class chargreterTarget {
    public static void main(String[] args) {

    }
    static int nextGreaterElement(char[]arr,char target){
        int start=0;
        int end = arr.length-1;

        while (start<=end){
            int mid = start+ (end-start)/2;

            if (target>arr[mid]){
                start=mid+1;

            }else if (target<arr[mid]){
                end=mid-1;
            }

        }

        return arr[start % arr.length];
    }
}
