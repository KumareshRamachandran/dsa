package BiWeekly134;

import java.util.*;

public class Question2 {
    public static void main(String[] args) {
        System.out.println(maximumPoints(new int[]{2,3,4}, 4));
    }
    public static long maximumPoints(int[] enemyEnergies, int currentEnergy) {
        long ans = 0;
        TreeMap<Integer, Integer> set = new TreeMap<>(); int cnt = 0;
        for(int i: enemyEnergies) set.put(i, set.getOrDefault(i, 0)+1);
        if(currentEnergy<set.firstKey()) return 0;
        while(!set.isEmpty()){
            if(currentEnergy>=set.firstKey()){
                ans++;
                currentEnergy -= set.firstKey();
            } else if(ans>=1){
                currentEnergy += set.lastKey();
                if(set.get(set.lastKey())!=0) {
                    set.put(set.lastKey(), set.get(set.lastKey())-1);
                    if(set.get(set.lastKey())==0) set.remove(set.lastKey());
                }
            } else {
                break;
            }
        }
        return ans;
//        Arrays.sort(enemyEnergies);
//        long points = 0;
//        int left = 0;
//        int right = enemyEnergies.length - 1;
//        while (left <= right) {
//            if (currentEnergy >= enemyEnergies[left]) {
//                currentEnergy -= enemyEnergies[left];
//                points++;
//            }
//            else if (points > 0) {
//                currentEnergy += enemyEnergies[right];
//                right--;
//            } else {
//                break;
//            }
//        }
//
//        return points;
    }
}
