import java.util.ArrayList;
import java.util.List;

public class LargeGroupPositions {
    public static void main(String[] args) {
        System.out.println(largeGroupPositions("dddd"));
    }
    public static List<List<Integer>> largeGroupPositions(String s) {
        List<List<Integer>> ans = new ArrayList<>();
        char curr = s.charAt(0); int cnt = 1;
        for(int i=1; i<s.length(); i++){
            if(s.charAt(i)==curr) {
                cnt++;
            }else{
                if(cnt>=3) {
                    List<Integer> temp = new ArrayList<>();
                    temp.add(i-cnt);
                    temp.add(i-1);
                    ans.add(temp);
                }
                cnt = 1;
                curr = s.charAt(i);
            }
        }
        if(cnt>=3){
            List<Integer> temp = new ArrayList<>();
            temp.add(s.length()-cnt);
            temp.add(s.length()-1);
            ans.add(temp);
        }
        return ans;
    }
}
