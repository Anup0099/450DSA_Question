package Sets;

import java.util.Set;

public class unique {
    static void uniq(int arr[]){
        Set<Integer> set = new java.util.HashSet<>();
        for (int i = 0; i < arr.length ; i++) {
            set.add(arr[i]);
        }
        if(set.contains(0)){
            System.out.println("0 is present");
        }
        else{
            System.out.println("0 is not present");
        }
        System.out.println(set);
    }
    public static void main(String[] args) {

    }
}
