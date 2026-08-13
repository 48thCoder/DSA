// Implement pow(x, n), which calculates x raised to the power n (i.e., x ^ n).

// BRUTE FORCE APPROACH -> TLE
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long N = abs(long(long(n)));
        for (long long i = 0; i < N; i++) {
            ans *= x;
        }
        return n > 0 ? ans : 1 / ans;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)
