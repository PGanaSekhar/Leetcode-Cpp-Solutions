class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int r=numBottles;
        while(numBottles>=numExchange){
            numBottles=numBottles-numExchange+1;
            r++;
        }
        return r;
    }
};
