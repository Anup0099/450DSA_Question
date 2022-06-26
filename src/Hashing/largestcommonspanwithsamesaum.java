package Hashing;

public class largestcommonspanwithsamesaum {
    public static int maxCommon(int a[],int b[]){
        int res=0;
        for (int i = 0; i <a.length ; i++) {
            int sum1=0,sum2=0;
            for (int j = i; j <b.length ; j++) {
                sum1 +=a[j];
                sum2 += b[j];
                if (sum1==sum2){
                    res = Math.max(res,j-i+1);
                }
            }
        }
        return res;
    }
    public static void main(String[] args) {
        int arr[]={0,1,0,0,0,0};
        int arr1[]={1,0,1,0,0,1};
        System.out.println(maxCommon(arr,arr1));
    }
}
