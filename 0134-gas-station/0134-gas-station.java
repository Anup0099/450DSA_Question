class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int totalgas = 0;
        int totalcost = 0;
        for (int i = 0; i < gas.length; i++) {
            totalgas += gas[i];
            totalcost += cost[i];
        }
        if (totalgas < totalcost) {
            return -1;
        }
        int remaininggas = 0;
        int start = 0;
        for (int i = 0; i < gas.length; i++) {
            remaininggas = remaininggas + (gas[i] - cost[i]);
            if (remaininggas < 0) {
                start = i + 1;
                remaininggas = 0;
            }

        }
        return start;
    }
}