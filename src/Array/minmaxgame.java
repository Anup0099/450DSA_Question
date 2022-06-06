package Array;

import java.util.ArrayList;
import java.util.List;

public class minmaxgame {
    public static int minMaxGame(int[] nums) {
        List<Integer> list = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            if (i %2== 0) {
                list.add(Math.min(nums[2*i], nums[2*i+1]));

            }else if (
                 i%2!=0)
            {
                list.add(Math.max(nums[2*i], nums[2*i+1]));
            }
        }

        return list.get(list.size()-1);



    }
    public static void main(String[] args) {

    }
}
