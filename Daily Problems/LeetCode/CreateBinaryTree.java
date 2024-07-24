import java.util.HashMap;
import java.util.LinkedList;
import java.util.Queue;

public class CreateBinaryTree {
    public static void main(String[] args) {
        int[][] descriptions = {{1,2,1},{2,3,0},{3,4,1}};
        TreeNode head = createBinaryTree(descriptions);
        inOrder(head);
    }
    public static void inOrder(TreeNode head){
        Queue<TreeNode> q = new LinkedList<>();
        q.add(head);
        while (!q.isEmpty()){
            TreeNode curr = q.poll();
            if(curr.left!=null) q.add(curr.left);
            if(curr.right!=null) q.add(curr.right);
            System.out.print(curr.val+" ");
        }
    }
    public static TreeNode createBinaryTree(int[][] descriptions) {
        HashMap<Integer, TreeNode> mpp = new HashMap<>();
        TreeNode head = null;
        for(int[] i: descriptions){
            if(mpp.containsKey(i[0])){
                TreeNode temp = new TreeNode(i[1]);
                if(i[2]==0) {
                    mpp.get(i[0]).right = temp;
                }else{
                    mpp.get(i[0]).left = temp;
                }
                mpp.put(i[1], temp);
            }else{
                mpp.put(i[0], new TreeNode(i[0]));
                TreeNode node;
                if(mpp.containsKey(i[1])) node = mpp.get(i[1]);
                else {
                    node = new TreeNode(i[1]);
                    mpp.put(i[1], node);
                }
                if(i[2]==0){
                    mpp.get(i[0]).right = node;
                }else{
                    mpp.get(i[0]).left = node;
                }
                if(head==null || mpp.containsKey(i[1])) head = mpp.get(i[0]);
            }
        }
        return head;
    }
}