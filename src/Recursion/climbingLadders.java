package Recursion;

public class climbingLadders {
    public static void main(String[] args) {
        System.out.println(countWays(3));
    }
    static int countWays(int n){
        //base
        if (n==0)return 1;
        if (n<0)return 0;
//        return countWays(n-1)+countWays(n-2)+countWays(n-3);
       return countWays(n-1)+countWays(n-2);
    }
}
