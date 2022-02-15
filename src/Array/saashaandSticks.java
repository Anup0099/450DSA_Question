package Array;

import java.util.Scanner;

public class saashaandSticks {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        long n = scn.nextLong();
        long k = scn.nextInt();
        if ((n/k)%2==1){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
    }
}
