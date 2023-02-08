public class taskScheduler {

    public int leastInterval(char[] tasks, int n) {
        int[] freq = new int[26];
        for (char c : freq) {
            freq[c - 'A']++;
        }
        Arrays.sort(freq);
        int maxFreq = freq[25]-1;
        int idleSlots = (maxFreq * n);
        for (int i = 24; i >= 0; i--) {
            idleSlots = idleSlots - Math.min(maxFreq, freq[i]);
        }
        return idleSlots > 0 ? idleSlots + tasks.length : tasks.length;

    }

    public static void main(String[] args) {

    }

}
