package Recursion;

public class factorial {
    public static void main(String[] args) {
    long n=10;

        System.out.println(fact((int)n));
    }
    static  int  fact(int n){
        if (n==0){
            return 1;
        }
        long m = fact(n-1);
        long f= n*m;
        return (int) f;
    }
}
