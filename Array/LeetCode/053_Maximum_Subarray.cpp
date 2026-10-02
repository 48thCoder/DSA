// Given an integer array nums, find the subarray with the largest sum, and return its sum.

// BRUTE FORCE APPROACH
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = nums[0];

        for (int i = 0; i < n; i++) {
            int sum = 0;

            for (int j = i; j < n; j++) {
                sum += nums[j];
                maxSum = max(maxSum, sum);
            }
        }
        return maxSum;
    }
};
// Time Complexity: O(n²)
// Space Complexity: O(1)

// OPTIMAL SOLUTION (Kadane's Algo)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, maxSum = nums[0];

        for (int x : nums) {
            if (sum < 0) {
                sum = 0;
            }
            sum += x;
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// USING DYNAMIC PROGRAMMING
?? PENDING ??
// Time Complexity: O(n)
// Space Complexity: O(n)

// DIVIDE & CONQUER APPROACH
?? PENDING ??
// Time Complexity: O(n log n)
// Space Complexity: O(log n)
