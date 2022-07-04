package Recursion;

public class generateSubset {
    static int generateSubset(int []arr,int n,int sum){
        if(n==0)
        {
            if(sum==0)
                return 1;
            else
                return 0;

        }
        return generateSubset(arr,n-1,sum)+generateSubset(arr,n-1,sum-arr[n-1]);
    }
    public static void main(String[] args) {
        int []arr={1,2,3,4,5};
        int n=arr.length;
        int sum=10;
        System.out.println(generateSubset(arr,n,sum));
    }
}
