int maxProfit(vector<int>& prices) {
    int n = prices.size();
    if (n < 2) {
        return 0; //Not enough days to make a profit.
    }

    //Initialize variables to represent the maximum profits.
    int buy1 = -prices[0]; //Maximum profit after the 1st buy.
    int sell1 = 0;         //Maximum profit after the 1st sell.
    int buy2 = -prices[0]; //Maximum profit after the 2nd buy.
    int sell2 = 0;         //Maximum profit after the 2nd sell.

    for (int i = 1; i < n; i++) {
        //Update the variables for the 1st transaction.
        buy1 = max (buy1, -prices[i]);
        sell1 = max (sell1, buy1 + prices[i]);

        //Update the variables for the 2nd transaction.
        buy2 = max (buy2, sell1 - prices[i]);
        sell2 = max (sell2, buy2 + prices[i]);
    }

    //The final answer is stored in sell2, which represents the maximum profit after the 2nd sell.
    return sell2;
}
