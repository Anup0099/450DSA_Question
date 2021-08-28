package com.company;

public class peakofMountain {
    public static void main(String[] args) {

    }
    public int peak(int[]arr){
        int start = 0;
        int end= arr.length-1;
        while (start< end){
            int mid = start +(end-start)/2;
            if (arr[mid]>arr[mid+1]){
                end = mid;
            }else {
                start = mid+1;
            }
        }
        return start;
    }
}
