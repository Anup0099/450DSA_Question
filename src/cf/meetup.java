package cf;

import java.util.Scanner;

public class meetup {
//    public static void main(String[] args) {
//        Scanner scn = new Scanner(System.in);
//        int n = scn.nextInt();
//        while (n-- > 0) {
//            int x1 = scn.nextInt(), x2 = scn.nextInt();
//            if (x1 == x2) {
//                System.out.println("YES");
//            } else if (x1 > x2) {
//                System.out.println("YES");
//            } else {
//                System.out.println("NO");
//            }
//        }
//    }

    public int josephus(int n, int k)
    {
        //Your code here
        return (k+1);


    }
    public static void pzz (int n){
        if (n==0){
            return;
        }
        System.out.println("pre"+n);
        pzz(n-1);
        System.out.println("in"+ n);
        pzz(n-1);
        System.out.println("post"+n);
    }
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n= scn.nextInt();
        while(n-->0){
            int x = scn.nextInt(),y= scn.nextInt(),z= scn.nextInt();
            if (x+y>z){
                System.out.println("TRAIN");
            }else if (x+y<z){
                System.out.println("PLANEBUS");
            }else{
                System.out.println("EQUAL");
            }
        }

//        while (n-->0){
//            int t = scn.nextInt();
//            t--;
//            int ans=0;
//            for (int i = 1; i*i <=t ; i++) {
//                if (t%i==0){
//                    ans++;
//                    if (i*i!=t){
//                        ans++;
//                    }
//                }
//            }
//            System.out.println(ans);
//        }

    }
}
