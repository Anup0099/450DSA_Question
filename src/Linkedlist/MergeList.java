public class MergeList {
    int data;
    MergeList next;

    static MergeList merge(MergeList a, MergeList b) {
        if (a == null)
            return b;
        if (b == null)
            return a;
        MergeList head = null, tail = null;
        if (a.data <= b.data) {
            head = tail = a;
            a = a.next;
        } else {
            head = tail = b;
            b = b.next;
        }
        while (a != null && b != null) {
            if (a.data <= b.data) {
                tail.next = a;
                tail = a;
                a = a.next;
            } else {
                tail.next = b;
                tail = b;
                b = b.next;
            }
        }
        if (a == null)
            tail.next = b;
        else
            tail.next = a;

        return head;

    }

    public static void main(String[] args) {

    }
}
