class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int maxno = numBottles;

        while(numBottles >= numExchange) {
            int newbottle = numBottles / numExchange;

            maxno += newbottle;

            numBottles = newbottle + (numBottles % numExchange);
        }

        return maxno;
    }
};
