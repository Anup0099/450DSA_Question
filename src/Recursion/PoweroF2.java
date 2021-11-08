package Recursion;

public class PoweroF2 {
    public static void main(String[] args) {
        int n =9;

        System.out.println(isPowerOfTwo(n));
    }
    static boolean isPowerOfTwo(int n)
    {
        if(n==0)
            return false;

        return (int)(Math.ceil((Math.log(n) / Math.log(2)))) ==
                (int)(Math.floor(((Math.log(n) / Math.log(2)))));
    }
}
