package Hashing;

import java.util.PriorityQueue;
import java.util.Scanner;

public class SortAnearlysortedArray {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        int k = scanner.nextInt();
        PriorityQueue<Integer> pd = new PriorityQueue<Integer>();
        for (int i = 0; i < k; i++) {
            pd.add(arr[i]);
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.println(pd.remove());
            pd.add(arr[i]);
        }
        while (pd.size() > 0) {

        }
    }
}
