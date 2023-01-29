import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

/**
 * combinationSum3
 */
public class combinationSum3 {
    public List<List<Integer>> combinationSum3(int k, int n) {
        Set<List<Integer>> set = new HashSet<>();
        combinationHelperSum3(set, k, n, new HashSet<>());
        return new ArrayList<>();
    }

    public void combinationHelperSum3(Set<List<Integer>> ans, int noofelements, int remainingSum,
            Set<Integer> runningSet) {
        if (noofelements == 0) {
            if (remainingSum == 0) {
                ans.add(new ArrayList<>(runningSet));
                return;
            } else {
                return;
            }
        }
        if (runningSum < 0) {
            return;
        }
        for(Integer it:runningSet){
            System.out.println(it+" ");
        }
        
        for (int i = 1; i <= 9; i++) {
            if(!runningSet.contains(i)){
                runningSet.add(i);
                combinationHelperSum3(ans, noofelements-1, remainingSum-i, runningSet);
                runningSet.remove(i);
            }
        }
    }

    public static void main(String[] args) {

    }
}