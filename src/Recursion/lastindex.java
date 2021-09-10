package Recursion;

public class lastindex {
    public static void main(String[] args) {

            int arr[]={4,5,6,56,8,8,9,6};
            int ans  = lastIndex(arr,1,6);
        System.out.println(ans);
    }
    static int lastIndex(int[]arr,int idx,int x){
        if (idx==arr.length){
            return -1;
        }
        int res = lastIndex(arr,idx+1,x);
        if (res==-1){
            if (arr[idx]==x){
                return idx;
            }else {
                return -1;
            }
        }else {
            return res;
        }
    }
}
