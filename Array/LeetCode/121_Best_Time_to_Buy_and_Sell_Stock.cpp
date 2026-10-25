// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// BRUTE FORCE APPROACH
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxVal = 0;
      
        for (int i = 0; i < n; i++) {
            int buy = prices[i];
          
            for (int j = i + 1; j < n; j++) {
                int sell = prices[j];
                maxVal = max(maxVal, sell - buy);
            }
        }
        return maxVal;
    }
};
// Time Complexity: O(n²)
// Space Complexity: O(1)

// BETTER SOLUTION (Two Pointer)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int l = 0, r = 1, maxVal = 0;
      
        while (r < n) {
            if (prices[l] < prices[r]) {
                int profit = prices[r] - prices[l];
                maxVal = max(profit, maxVal);
            } else {
                l = r;
            }
            r++;
        }
        return maxVal;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// OPTIMAL APPROACH (DP)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minBuy = prices[0], maxProfit = 0;

        for (int i = 0; i < n; i++) {
            maxProfit = max(maxProfit, prices[i] - minBuy);
            minBuy = min(minBuy, prices[i]);
        }
        return maxProfit;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)
