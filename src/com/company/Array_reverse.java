package com.company;

public class Array_reverse {
    public static void main(String[] args) {
                int arr[]={1,2,5,68,69,7};

                Array(arr,0,5);
                print(arr,6);


    }
    static  void Array(int []arr,int start,int end){

        int temp;
        if (start>=end)return ;
        temp=arr[start];
        arr[start]= arr[end];
        arr[end]=temp;
         Array(arr, start+1, end-1);



    }
    static  void print(int []arr,int n){
        for (int i = 0; i <n ; i++) {
            System.out.print(arr[i]+" ");

        }
    }
}
