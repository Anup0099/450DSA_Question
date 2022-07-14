package stack;

import javax.imageio.stream.ImageInputStream;
import java.util.HashSet;
import java.util.Set;

public class stockSpan {
    static void stockspan(int[] arr){
        for (int i = 0; i <arr.length ; i++) {
         int span=1;
            for (int j = i-1; j >=0 && arr[j]<=arr[i] ; j--) {
                span++;
            }
            System.out.println(span+" ");
        }
    }

    static void printRewpeating(int[] arr) {
        Set<Integer> s = new HashSet<>();
        for (int j : arr) {
            if (s.contains(j)) {
                System.out.println(j + " ");
            } else {
                s.add(j);
            }
        }

    }


    public static void main(String[] args) {
        int[] arr ={10,8,10,8};
        printRewpeating(arr);
    }
}

