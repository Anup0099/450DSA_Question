import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

class largestPlusSign {
    public List<Integer> findlonely(int[] nums) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        for (int num : nums) {
            mp.put(nums, mp.getOrDefault(mp, 0) + 1);
        }
        List<Integer> li = new ArrayList<>();
        for (int num : mp.keySet()) {
            if (!mp.containsKey(num - 1) && !mp.containsKey(num + 1) && mp.get(num) == 1) {
                li.add(num);
            }

        }
        return li;
    }

    

    public static void main(String[] args) {

    }
}