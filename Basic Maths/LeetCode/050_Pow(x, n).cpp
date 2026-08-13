// Implement pow(x, n), which calculates x raised to the power n (i.e., x ^ n).

// BRUTE FORCE APPROACH -> TLE
class Solution {
    public double myPow(double x, int n) {
        double ans = 1;
        if (n < 0) {
            x = 1 / x;
        }
        n = Math.abs(n);
        for (int i = 1; i <= n; i++) {
            ans *= x;
        }
        return ans;
    }
}
// Time Complexity: O(n)
// Space Complexity: O(1)
