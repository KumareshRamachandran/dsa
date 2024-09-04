public class PassThePillow {
    public static void main(String[] args) {
        System.out.println(passThePillow(18, 38));
    }
    public static int passThePillow(int n, int time) {
        byte flag = 0;
        short cnt = 1;
        while(time>0){
            if(flag==1){
                cnt--;
            }else{
                cnt++;
            }
            if(cnt==1) flag = 0;
            if(cnt==n) flag = 1;
            time--;
        }
        return cnt;
    }
}
