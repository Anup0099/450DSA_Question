package Hashing;

import java.util.HashSet;

public class intersection {
    public static void main(String[] args) {

    }
    static int intersect(int[]arr1,int []arr2){
        HashSet<Integer>set = new HashSet<>();
        int count = 0;
        for (int x:arr1
             ) {
            set.add(x);

        }
        for (int x:arr2)
              {
                  if (set.contains(x)){
                      count++;
                      set.remove(x);
                  }

        }
        return count;
    }
}
