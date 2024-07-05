import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

public class NodesBetweenCriticalPoints {
    public static void main(String[] args) {
        ListNode head = ListNode.create(new int[]{2,2,1,3});
        System.out.println(Arrays.toString(nodesBetweenCriticalPoints(head)));
    }
    public static int[] nodesBetweenCriticalPoints(ListNode head) {
        List<Integer> list = new ArrayList<>();
        ListNode prev = null, curr = head, next = head.next;
        int[] ans = {-1, -1};
        int cnt = 0, min = Integer.MAX_VALUE;
        while(next!=null){
            if(prev != null){
                if(prev.val<curr.val && curr.val>next.val){
                    if(!list.isEmpty()) {
                        min = Math.min(min, cnt-list.get(list.size()-1));
                    }
                    list.add(cnt);
                }
                if(prev.val>curr.val && curr.val<next.val){
                    if(!list.isEmpty()) {
                        min = Math.min(min, cnt - list.get(list.size() - 1));
                    }
                    list.add(cnt);
                }
            }
            prev = curr;
            curr = next;
            next = curr.next;
            cnt++;
        }
        if(list.size()>1){
            ans[0] = min==Integer.MAX_VALUE ? -1 : min; ans[1] = list.get(list.size()-1)-list.get(0);
        }
        return ans;
    }
}

