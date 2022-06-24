package Array;

public class unionoftwoarray {
    public static int unnion(int a[],
                             int b[]) {
        int m = a.length, n = b.length;
        int c[] = new int[a.length + b.length];
        for (int i = 0; i < a.length; i++) {
            c[i] = a[i];
        }
        for (int i = 0; i < b.length; i++) {
            c[i + a.length] = b[i];

        }
        int res = 0;
        for (int i = 0; i < (m + n); i++) {
            boolean flag = false;
            for (int j = 0; j < i; j++) {
                if (c[i] == c[j]) {
                    flag = true;
                    break;
                }

            }
            if (!flag) {
                res++;
            }
        }
        return res;
    }
static  void intersection(int a[],int b[]){
    for (int i = 0; i <a.length ; i++) {
        for (int j = 0; j < b.length ; j++) {
            if(a[i]==b[j]){
                System.out.println(a[i]);
                break;
            }
        }
    }
}

    public static boolean subarraySum(int[] nums, int k) {
        int count=0;
        for (int i = 0; i < nums.length ; i++) {
         int currsum=0;
            for (int j = i; j < nums.length ; j++) {
                currsum +=nums[i];
                if (currsum==k){
                    count++;
                    return true;
                }
            }
        }
        return false;
    }
    public static void main(String[] args) {
        int arr[] = {1,2,2,1};
        int arr1[] = {2};

       intersection(arr,arr1);

    }
}
