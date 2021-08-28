package com.company;

import java.util.ArrayList;
import java.util.HashMap;

public class reverseLinkedlist {


    public static void main(String[] args) {
        int []arr ={45,5,56,89,9653};
        int n=5;
        System.out.println(maxlen(arr,n));
    }


    static int maxlen(int []arr,int n){
        HashMap<Integer,Integer>mpp=new HashMap<>();
        int maxi =0;
        int sum = 0;
        for (int i = 0; i <n ; i++) {
            sum += arr[i];
            if (sum==0){
                maxi=i+1;
            }else {
                if (mpp.get(sum)!=null){
                    maxi=Math.max(maxi,i-mpp.get(sum));
                }else {
                    mpp.put(sum,i);
                }
            }

        }
        return maxi;
    }


}
