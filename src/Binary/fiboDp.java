//package Binary;
//
//import java.util.Scanner;
//
//public class fiboDp {
//    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        int n= sc.nextInt();
//        int fibs = fib(n);
//        int a= Integer.parseInt()
//    }
//    public static int fib(int n){
//        if (n==0 || n==1){
//            return n;
//        }
//        int fib1 = fib(n-1);
//        int fib2 = fib(n-2);
//        int fibn = fib1+fib2;
//        return fibn;
//
//    }
//    public static int fibmemo(int n,int []qb){
//        if (n==0 || n==1){
//            return n;
//        }
//        if (qb[n]!=0){
//            return qb[n];
//        }
//        int fib1 = fibmemo(n-1,qb);
//        int fib2 = fibmemo(n-2,qb);
//        int fibn = fib1+fib2;
//        qb[n]=fibn;
//        return fibn;
//    }
//}
