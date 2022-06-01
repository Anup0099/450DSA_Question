package Recursion;

public class ropecutting {
   static int maxpiece(int n,int a,int b,int c){
        if(n==0){
            return 0;
        }
        if (n<0)return -1;
        int res =Math.max(Math.max(maxpiece(n-a,a,b,c),maxpiece(n-b,a,b,c)),
                maxpiece(n-c,a,b,c));
        if (res==-1){
            return -1;
        }
        return res+1;

    }
    public static void main(String[] args) {
        System.out.println(maxpiece(23,11,9,12));
    }
}
