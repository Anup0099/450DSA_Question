package Binary;

public class lastOccurance {
    static int lastocc(int arr[],
                       int low,
                       int high,
                       int key) {
        if (low > high) {
            return -1;
        }
        int mid = (low + high) / 2;
        if (arr[mid] > key) {
            lastocc(arr, low, mid - 1, key);// search in left subarray
        } else if (arr[mid] < key) {
            lastocc(arr, mid + 1, high, key);// search in right subarray
        } else {
            if (mid == arr.length - 1 || arr[mid] != arr[mid + 1]) {
                return mid;
            } else {
                return lastocc(arr, mid + 1, high, key);
            }
        }
        return -1;
    }

    public static void main(String[] args) {

    }
}
