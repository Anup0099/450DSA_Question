package Recursion;

public class DisplayArray {
    public static void main(String[] args) {
        int[]arr ={78,8,9,65};
        display(arr,0);
    }
    static void display(int []arr,int idx){
        if (idx==arr.length){
            return;
        }
        System.out.println(arr[idx]);
        display(arr,idx+1);
    }
}
