package Binary;

public class SearchInsert {
    public static void main(String[] args) {
        int []num={1,3,5,7};
        int target= 6;
        System.out.println(binarySearch(num,target));
    }

    static  int binarySearch(int arr[],int target){
        int start =0;
        int end = arr.length-1;
        while (start<=end){
            //find middle elemnt
//            int mid = (start+end)/2;
            int mids = start+(end-start)/2;

            if (target<arr[mids]){
                end= mids-1;

            }else if (target>arr[mids]){
                start= mids+1;

            }
            else {
                return mids;
            }
        }
        return start;
    }
}
