public class NumWaterBottles {
    public int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles, empty = 0;
        while(numBottles!=0){
            empty += numBottles;
            numBottles = empty/numExchange;
            ans += numBottles;
            empty %= numExchange;
        }
        return ans;
    }
}
