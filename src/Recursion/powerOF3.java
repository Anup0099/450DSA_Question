package Recursion;

public class powerOF3 {
    public static   void main(String[] args) {
        boolean a=isPo(9);
        System.out.println(a);
    }
     static boolean isPo(int n){
        while(n>=3){
            if (n%3 != 0)return false;
            n=n/3;

        }
        return n==1;
    }
}
