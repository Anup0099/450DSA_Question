package Recursion;

public class Firstoccurance {
    public static void main(String[] args) {
        int arr[] ={45,5,68,963,3};
        System.out.println(firstOcc(arr,0,5,68));
    }
    static int firstOcc(int[]arr,int i,int n,int key){
        if (i==n)return -1;
        if (arr[i]==key)return 0;
        int subIndex = firstOcc(arr,i+1,n-1,key);
        if (subIndex!=-1){
            return subIndex+1;
        }
        return -1;
    }

    static int lastIndex(int []arr,int i,int n,int key){
        if (i==n){
            return -1;

        }
        int subindex = lastIndex(arr,i+1,n-1,key);
        if (subindex!=-1){
            if (arr[i]==key){
                return  0;

            }
            else{
                return -1;
            }
        }else{
            return  subindex+1;
        }
    }
}
