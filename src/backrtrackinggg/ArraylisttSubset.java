package backrtrackinggg;

import java.util.ArrayList;

public class ArraylisttSubset {
    public static void main(String[] args) {
        int []arr ={1,23,45,67,77};
        System.out.println(findindex(arr,45,0));
    }
    static  int findindex(int[]arr,int target,int index){
        if (index== arr.length){
            return -1;
        }
        if (arr[index]==target){
            return index;
        }else {
            return findindex(arr,target,index+1);
        }
    }
}
