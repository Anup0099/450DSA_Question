package Recursion;

import java.util.ArrayList;

public class sortedornot {
    public static void main(String[] args) {
int []arr = {1,2,3,44,4,4};
        System.out.println(find(arr,4,0));
        findall(arr,4,0);
        System.out.println(list);
    }
    static boolean sorted(int []arr,int index){
        //base condition
        if (index== arr.length-1){
            return true;
        }
        return arr[index]<arr[index+1] && sorted(arr,index+1);
    }
    static boolean find(int []arr,int target,int index){
        if (index==arr.length){
            return false;
        }
        return arr[index]==target || find(arr,target,index+1);

    }
    static ArrayList<Integer>list= new ArrayList<>();
    static void findall(int []arr,int target,int index){
        if (index==arr.length){
            return;
        }
        if (arr[index]==target){
            list.add(index);
        }
        findall(arr,target,index+1);

    }
}
