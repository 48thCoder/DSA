// Given a binary array nums, return the maximum number of consecutive 1's in the array.

// BRUTE FORCE APPROACH -> TLE
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxCount = 0;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = i; j < n; j++) {
                if (nums[j] != 1) {
                    i = j;
                    break;
                }
                count += 1;
                maxCount = max(maxCount, count);
            }
        }
        return maxCount;
    }
};
// Time Complexity: O(n²)
// Space Complexity: O(1)

// OPTIMAL SOLUTION
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxCount = 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                count += 1;
                maxCount = max(maxCount, count);
            } else {
                count = 0;
            }
        }
        return maxCount;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)
