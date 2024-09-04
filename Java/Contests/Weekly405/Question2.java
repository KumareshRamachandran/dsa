package Weekly405;

import java.util.ArrayList;
import java.util.List;

public class Question2 {
    public static void main(String[] args) {
        System.out.println(validStrings(18));
    }
    public static List<String> validStrings(int n) {
        List<String> ans = new ArrayList<>();
        for(int i=0; i<(1<<n); i++){
            if(toBinary(i, n)!=null) ans.add(toBinary(i, n));
        }
        return ans;
    }
    public static String toBinary(int num, int n){
        StringBuilder st = new StringBuilder();
        int prev = 1;
        while(num!=0){
            int curr = num%2;
            if(curr==0 && prev==0) return null;
            st.append(curr);
            prev = curr;
            num /= 2;
        }
        if(st.length()<n) {
            if(n-st.length()>1) return null;
            st.append("0".repeat(n-st.length()));
        }
        st.reverse();
        return st.toString();
    }
}
