package Sorting;

public class duplicate {
    public static void main(String[] args) {
            int []arr ={1,3,4,2,2};
        System.out.println(cycle(arr));
    }
    static int cycle(int[]arr){
        int i=0;
        while(i<arr.length){
            int correct= arr[i]-1;
            if (arr[i]!= arr[correct]){
                swap(arr,i,correct);
            }else {
                i++;
            }
        }



        return  0;
    }
    static void swap(int[]arr,int first,int second){
        int temp=arr[first];
        arr[first]=arr[second];
        arr[second]=temp;
    }
}
