package Weekly404;

public class Question1 {
    public static void main(String[] args) {
        System.out.println(maxHeightOfTriangle(10, 1));
    }
    public static int maxHeightOfTriangle(int red, int blue) {
        int temp1 = red, temp2 = blue;
        int height = 0;
        int i = 1;
        while(blue>0 || red>0){
            if(i%2==1){
                blue-=i;
                if(blue>=0) height++;
                else break;
            }else{
                red -= i;
                if(red>=0) height++;
                else break;
            }
            i++;
        }
        i = 1;
        int temp3 = 0;
        red = temp1; blue = temp2;
        while(red>0 || blue>0){
            if(i%2==1){
                red-=i;
                if(red>=0) temp3++;
                else break;
            }else{
                blue -= i;
                if(blue>=0) temp3++;
                else break;
            }
            i++;
        }
        return Math.max(temp3, height);
    }
}
