package Binary;

public class Arrangecoins {
    public static void main(String[] args) {
            int n=5;
        System.out.println(arrangeCoins(1804289383));
    }
    static int arrangeCoins(int n) {

        long start=1;
        long end = n;
        while (start<=end){
            long mid = (start+end)/2;
            long mid_value = mid*(mid+1)/2;
            if (mid_value==n){
                return (int) mid;
            }else if (mid_value<n){
                start=mid+1;

            }else {
                end = mid-1;
            }
        }
        return (int)end;

    }
}
