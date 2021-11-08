package Pattern;

public class first {
    public static void main(String[] args) {
        p28(5);
    }

    static void par(int n) {
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= row; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    static void p2(int n) {
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= n - row + 1; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    static void p3(int n) {
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= row; col++) {
                System.out.print(col + "  ");
            }
            System.out.println();
        }
    }


    static void p28(int n) {
        for (int row = 1; row <= 2 * n; row++) {
            int totalColumn = row > n ? 2 * n - row : row;
            int noOfSpaces = n-totalColumn;
            for (int i = 0; i <noOfSpaces ; i++) {
                System.out.print(" ");
            }
            for (int col = 1; col <totalColumn; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
