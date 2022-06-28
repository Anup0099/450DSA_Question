package Recursion;

import java.util.ArrayList;

public class subsequencesss {
    public static void f(int index,
                         ArrayList<Integer> arr,
                         int arrr[]) {
        if (index == arrr.length) {
            System.out.println(arr);
            return;
        }
        f(index + 1, arr, arrr);
        arr.add(arrr[index]);


        f(index + 1, arr, arrr);
        arr.remove(arr.size() - 1);
        return;
    }

    public static void main(String[] args) {
        int arrr[] = {1, 2, 3};
        ArrayList<Integer> arr = new ArrayList<>();
        f(0, arr, arrr);
    }
}
