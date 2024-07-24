import java.util.Scanner;

public class ChewbaccaAndNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long value = sc.nextLong();
        StringBuilder sb = new StringBuilder();
        for(char i: Long.toString(value).toCharArray()){
            int curr = i-'0';
            if(curr==9 && sb.isEmpty()) sb.append(curr);
            else if((curr)>4){
                sb.append(9-curr);
            }else sb.append(curr);
        }
        System.out.println(sb);
    }
}
