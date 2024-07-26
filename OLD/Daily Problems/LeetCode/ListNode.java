public class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    public static ListNode create(int[] nums){
        ListNode head = new ListNode(nums[0]);
        ListNode temp = head;
        for(int i=1; i<nums.length; i++){
            temp.next = new ListNode(nums[i]);
            temp = temp.next;
        }
        return head;
    }
}