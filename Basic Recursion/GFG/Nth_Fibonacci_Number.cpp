// Find the n-th Fibonacci number for a given non-negative integer n. The Fibonacci sequence is defined as:
// F(0) = 0
// F(1) = 1
// F(n) = F(n - 1) + F(n - 2) for n ≥ 2

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
