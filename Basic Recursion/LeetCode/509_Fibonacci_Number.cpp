// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).

// BRUTE FORCE (NAIVE RECURSION)
class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }
};
// Time Complexity: O(2ⁿ)
// Space Complexity: O(n)

// ITERATIVE APPROACH
class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
            return n;
        }
        vector<int> f(n + 1);
        f[0] = 0;
        f[1] = 1;
        for (int i = 2; i <= n; i++) {
            f[i] = f[i - 1] + f[i - 2];
        }
        return f[n];
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)

// OPTIMAL SOLUTION
class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
            return n;
        }
        int prev = 0, curr = 1, next;
        for (int i = 2; i <= n; i++) {
            next = curr + prev;
            prev = curr;
            curr = next;
        }
        return curr;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)
