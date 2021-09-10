package Array;

import java.util.ArrayList;
import java.util.List;
import java.util.Objects;

public class pascaltriangle {
    public static void main(String[] args) {

    }
    static List<List<Integer>> pasca(int numrows){
        List<List<Integer>>res = new ArrayList<List<Integer>>();
        List<Integer>row,pre = null;
        for (int i = 0; i <numrows ; ++i) {
            row = new ArrayList<Integer>();
            for (int j = 0; j <=i;++j){
                if (j==0 || j==i){
                    row.add(1);
                }else {
                    assert pre != null;
                    row.add(pre.get(j-1)+pre.get(j));
                }
            }
            pre = row;
            res.add(row);
        }
        return res;
    }
}
