package Recursion;

public class sudoku {
    static int N;
    static int grid[][] = new int[N][N];
        public static  boolean solve() {
            int i,j = 0;
            for ( i = 0; i <N ; i++) {
                for ( j = 0; j <N ; j++) {
                    if (grid[i][j] == 0) {
                        break;
                    }
                    if (i == N && j == N) {
                        return true;
                    }
                }
                for (int n = 1; n <=N; n++) {
                    if (isSafe( i, j, n)) {
                        grid[i][j] = n;
                        if (solve()) {
                            return true;
                        }
                        grid[i][j] = 0;
                    }

                }

            }
            return false;

        }//check and return true if the number is safe to enter the grid
        static  boolean isSafe(int i,int j,int n) {
            for (int row = 0; row <N ; row++) {
                if (grid[row][j] == n || grid[i][row] == n) {
                    return false;
                }
            }
            int s = (int) Math.sqrt(N);
            int x = i - i % s;
            int y = j - j % s;
            for (int row = 0; row <s ; row++) {
                for (int col = 0; col <s ; col++) {
                    if (grid[x + row][y + col] == n) {
                        return false;
                    }


                }

            }
            return true;
        }//check if the number is safe to be placed in the grid at the given position
    //check if the number is unique in the row,column and subgrid

    public static void main(String[] args) {

    }
}
