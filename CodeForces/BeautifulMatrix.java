import java.util.Scanner;

public class BeautifulMatrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                int value = sc.nextInt();
                if(value==1){
                    System.out.println(Math.abs(2-i)+Math.abs(2-j));
                    return;
                }
            }
        }
    }
}
