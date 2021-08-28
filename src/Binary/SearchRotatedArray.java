package Binary;

public class SearchRotatedArray {
    public static void main(String[] args) {
int []arr={4,5,6,7,0,1,2};

        System.out.println(findThepivot(arr));
    }
    static int search(int []nums,int target) {
        int pivot= findThepivot(nums);
        if (pivot==-1){
            return pivot;
    } if (target >= nums[0]) {
            return binarysearch(nums, target, 0, pivot - 1);
        }

        return binarysearch(nums, target, pivot + 1, nums.length - 1);
    }
    static int binarysearch(int[]arr, int target,int start,int end) {

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
        return -1;
    }
    static int findThepivot(int[]arr){
        int start=0;
        int end = arr.length-1;
        while (start<=end){
            int mid = start+(end-start)/2;
            if (mid<end && arr[mid]>arr[mid-1]){
                return mid;
            }else if (mid>start && arr[mid]<arr[mid-1]){
                return mid-1;
            }else if (arr[mid]<= arr[start]){
                end = mid-1;
            }else {
                start=mid+1;
            }
        }
        return -1;
    }
}






