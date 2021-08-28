package Recursion;

public class maxofArray {
    public static void main(String[] args) {
        int []arr= new int[5];
        arr = new int[]{89, 6, 56, 23, 145};
        System.out.println(maxArray(arr,0));
    }
    static int maxArray(int[] arr,int idx){
        if (idx==arr.length-1){
            return arr[idx];
        }
        int misa =  maxArray(arr,idx+1);
        if (misa > arr[idx]){
            return misa;
        }
        else {
            return arr[idx];
        }
    }
}
