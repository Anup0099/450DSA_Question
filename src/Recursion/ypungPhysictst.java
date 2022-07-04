package Recursion;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class ypungPhysictst {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
       int arr[][]=new int[n][3];
        for (int i = 0; i < n; i++) {

            for (int j = 0; j < 3; j++) {
                arr[i][j] = sc.nextInt();
            }

        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                sum = sum + arr[i][j];
            }
        }
       if(sum==0){
              System.out.println("YES");
         }
         else{
              System.out.println("NO");
       }

    }
}
