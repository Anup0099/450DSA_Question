package cf;

import java.util.*;

public class election {
    public static void f(int i, List<Integer>arr){
        if (i>= arr.size()/2){
            return;
        }
     Collections.swap(arr,i,arr.size()-i-1);
    f(i+1,arr);
    System.out.println(arr);

    }
    public static void main(String[] args) {
//        Scanner scn = new Scanner(System.in);
//        int n = scn.nextInt();
////        while (n-->0){
////            int a=scn.nextInt(),b= scn.nextInt(),c= scn.nextInt();
////            if (a>50 && a<101){
////                System.out.println('A');
////            }else if (b>50 && b<101){
////                System.out.println('B');
////            }else if (c>50 && c<101){
////                System.out.println('C');
////            }
////            else if(a<=50 || b<=50||c<=50 ){
////                System.out.println("NOTA");
////            }
////        }
//        while (n-->0){
//            int t = scn.nextInt();
//            int ans = (52%t);
//            System.out.println(ans);
//        }
        List<Integer> list = Arrays.asList(44, 55, 99, 77, 88, 66);
        System.out.println("List before swapping: "+list);
        f(0,list);

    }
}
