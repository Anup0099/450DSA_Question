import java.util.Scanner;

/**
 * playingWithTheDice
 */
public class playingWithTheDice {

    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            int a = scanner.nextInt(), b = scanner.nextInt();
            int aWin = 0, bWin = 0, draw = 0;
            for (int i = 1; i <= 6; i++) {

                if (Math.abs(a - i) < Math.abs(b - i)) {
                    aWin++;
                } else if (Math.abs(a - i) > Math.abs(b - i)) {
                    bWin++;
                } else {
                    draw++;
                }
            }
            System.out.println(aWin + " " + bWin + " " + draw);
        }
    }
}