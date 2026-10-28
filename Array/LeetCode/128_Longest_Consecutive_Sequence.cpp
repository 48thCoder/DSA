// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
// You must write an algorithm that runs in O(n) time.

// BRUTE FORCE APPROACH -> TLE
class Solution {
public:
    bool linearSearch(vector<int>& nums, int x) {
        for (int num : nums) {
            if (num == x)
                return true;
        }
        return false;
    }

    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int longest = 1;

        if (n == 0) {
            return 0;
        }

        for (int i = 0; i < n; i++) {
            int x = nums[i];
            int count = 1;

            while (linearSearch(nums, x + 1)) {
                x++;
                count++;
            }
            longest = max(longest, count);
        }
        return longest;
    }
};
// Time Complexity: O(n²)
// Space Complexity: O(1)

// BETTER SOLUTION (Sorting)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int lastSmall = INT_MIN, count = 0, longest = 1;
        sort(nums.begin(), nums.end());

        if (n == 0) {
            return 0;
        }

        for (int num : nums) {
            if (num - 1 == lastSmall) {
                count++;
                lastSmall = num;
            } else if (lastSmall != num) {
                count = 1;
                lastSmall = num;
            }
            longest = max(longest, count);
        }
        return longest;
    }
};
// Time Complexity: O(n log n) + O(n) ~ O(n log n)
// Space Complexity: O(1) or O(n)

// OPTIMAL SOLUTION
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for (int num : st) {
            if (st.find(num - 1) == st.end()) {
                int length = 1;

                while (st.find(num + length) != st.end()) {
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)
