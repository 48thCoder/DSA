// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

// BRUTE FORCE APPROACH
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        vector<int> temp(k);

        for (int i = n - k; i < n; i++) {
            temp[i - n + k] = nums[i];
        }

        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};
// Time Complexity: O(d) + O(n - d) + O(d) ~ O(n + d) ~ O(n)
// Space Complexity: O(d)

// OPTIMAL SOLUTION
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
// Time Complexity: O(n) + O(n - d) + O(d) ~ O(2n) ~ O(n)
// Space Complexity: O(1)
