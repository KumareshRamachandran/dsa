package CFC_Round_961_Div2;

import java.util.Arrays;
import java.util.Scanner;

public class B2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int loops = sc.nextInt();
        for (int j = 0; j < loops; j++) {
            int size = sc.nextInt();
            int total = sc.nextInt();
            int[] nums = new int[size];
            int i = 0;
            while (i < size) {
                nums[i++] = sc.nextInt();
            }
            Arrays.sort(nums);
            int fAns = getfAns(nums, total);
            System.out.println(fAns);
        }
    }

    private static int getfAns(int[] nums, int total) {
        int left = nums.length - 1, right = nums.length - 1;
        int ans = 0, fAns = 0;
        while (left > 0) {
            if (right > 0 && nums[right] - nums[left] <= 1) {
                if (ans + nums[left] <= total) {
                    ans += nums[left--];
                    fAns = Math.max(fAns, ans);
                } else {
                    ans -= nums[right--];
                }
            } else {
                ans -= nums[right--];
            }
        }
        return fAns;
    }
}
