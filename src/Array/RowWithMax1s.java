package Array;

import java.util.ArrayList;

public class RowWithMax1s {
 public static int rowWithMax1s(int arr[][], int n, int m) {
     for(int j=0;j<m;j++){
         for(int i=0;i<n;i++){
             if(arr[i][j]==1)
                 return i;
         }
     }
     return -1;
    }
    static ArrayList<Integer> spirallyTraverse(int matrix[][], int r, int c)
    {
        ArrayList<Integer> result = new ArrayList<Integer>();
        int row = 0;
        int col = 0;
        int maxRow = r-1;
        int maxCol = c-1;
        while(row <= maxRow && col <= maxCol)
        {
            for(int i = col; i <= maxCol; i++)
                result.add(matrix[row][i]);
            row++;
            for(int i = row; i <= maxRow; i++)
                result.add(matrix[i][maxCol]);
            maxCol--;
            if(row <= maxRow)
            {
                for(int i = maxCol; i >= col; i--)
                    result.add(matrix[maxRow][i]);
                maxRow--;
            }
            if(col <= maxCol)
            {
                for(int i = maxRow; i >= row; i--)
                    result.add(matrix[i][col]);
                col++;
            }
        }
        return result;
    }
    public static void main(String[] args) {
        int arr[][] = {{0, 1, 1, 1},
                {0, 0, 1, 1},
                {1, 1, 1, 1},
                {0, 0, 0, 0}};
        int n=5;
        int m=5;
        System.out.println(rowWithMax1s(arr, n, m));
    }
}
