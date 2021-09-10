package Binary;

public class MedianTwosorted {
    public static void main(String[] args) {

    }

    static double find(int[] arr, int[] arr2) {
        int len = arr2.length + arr.length;
        int[] merged = new int[len];
        int i = 0, j = 0, k = 0;
        while (i < arr.length && j < arr2.length) {
            if (arr[i] < arr2[j]) {
                merged[k] = arr[i];
                i++;
                k++;
            } else {
                merged[k] = arr2[i];
                j++;
                k++;
            }
        }
        while (i < arr2.length) {
            merged[k] = arr2[j];
            j++;
            k++;

        }
        double median = 0.0;
        int mid = merged.length / 2;

        if (merged.length % 2 == 1) {
            median = merged[mid];
        } else  {
            median = (merged[mid] + merged[mid - 1]) / 2.0;
        }

        return median;
    }
}
