// You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1.
// Return the maximum possible frequency of an element after performing at most k operations.

// BRUTE FORCE APPROACH (TLE)
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 1;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                long long cost = 0;
                for (int x = i; x <= j; x++) {
                    cost += nums[j] - nums[x];
                }
                if (cost <= k) {
                    count = max(count, j - i + 1);
                }
            }
        }
        return count;
    }
};
// Time Complexity: O(n³)
// Space Complexity: O(1)

// PREFIX SUM + BINARY SEARCH
?? PENDING ??
// Time Complexity: O(nlogn)
// Space Complexity: O(n)

// SLIDING WINDOW WITH TWO POINTERS (Optimal)
?? PENDING ??
// Time Complexity: O(nlogn)
// Space Complexity: O(1) 
