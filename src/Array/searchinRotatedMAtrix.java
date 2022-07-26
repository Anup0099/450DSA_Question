package Array;

import java.util.ArrayList;

public class searchinRotatedMAtrix {
    public static ArrayList<Integer>search(int[][] matrix, int target) {
        ArrayList<Integer> result = new ArrayList<Integer>();
        int row = 0;
        int col = matrix[0].length-1;
        while(row<matrix.length && col>=0) {
            if(matrix[row][col]==target) {
                result.add(row);
                result.add(col);
                return result;
            }
            else if(matrix[row][col]>target) {
                col--;
            }
            else {
                row++;
            }
        }
        return result;
    }
    public static void main(String[] args) {
        int[][] matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
        int target = 16;
        System.out.println(search(matrix, target));
    }
}
