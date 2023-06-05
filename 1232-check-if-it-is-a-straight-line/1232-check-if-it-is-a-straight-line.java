class Solution {
    public boolean checkStraightLine(int[][] c) {
          int d_y = c[1][1] - c[0][1];
        int d_x = c[1][0] - c[0][0];
        
        for(int i=2; i<c.length; i++) {
            int d_y_i = c[i][1] - c[0][1];
            int d_x_i = c[i][0] - c[0][0];
            
            if(d_y_i*d_x != d_x_i*d_y) {
                return false;
            }
        }
        return true;
    }
}