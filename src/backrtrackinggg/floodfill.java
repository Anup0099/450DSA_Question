
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

        scn.close();

    }
    public static  void floodfills(int[][]maze,int row,int col,String psf){
        if(row<0 || row>=maze.length || col<0 || col>=maze[0].length || maze[row][col]==0 || maze[row][col]==2){
            return;
        }
        if(maze[row][col]==1){
            maze[row][col]=2;
            floodfills(maze,row+1,col,psf+"D");
            floodfills(maze,row-1,col,psf+"U");
            floodfills(maze,row,col+1,psf+"R");
            floodfills(maze,row,col-1,psf+"L");
        }
    }
}
