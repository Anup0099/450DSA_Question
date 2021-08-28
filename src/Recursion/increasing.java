package Recursion;

public class increasing {
    public static void main(String[] args) {
        int m=4;
        increase(m);

    }
    static void  increase(int n){
        if (n==0){
            return;
        }
        System.out.println(n);
        increase(n-1);
        System.out.println(n);




    }
}
