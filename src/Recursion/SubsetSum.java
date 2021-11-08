package Recursion;

public class SubsetSum {
    public static void main(String[] args) {
        int []arr={1,2,3,4,5};
        int x =10;

        System.out.println(subset(arr,arr.length,0,x));

    }
    static int subset(int[]arr,int n,int i,int sum){
        //base
        if (i==n){
            if (sum==0)return 1;
            return 0;
        }
        int inc = subset(arr,n,i+1,sum-arr[i]);
        int ex = subset(arr,n,i+1,sum);
        return ex+inc;
    }

}
