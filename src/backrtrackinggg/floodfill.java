package backrtrackinggg;

import java.util.Scanner;

public class floodfill {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int m = scn .nextInt();
        int [][]arr = new int[n][m];
        for (int i = 0; i < arr.length ; i++) {
            for (int j = 0; j <arr[0].length ; j++) {
                arr[i][j]= scn.nextInt();
            }
        }

    }
    public static  void floodfills(int[][]maze,int row,int col,String psf){

    }
}
