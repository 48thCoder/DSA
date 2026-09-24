// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// BRUTE FORCE APPROACH -> TLE
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};
// Time Complexity: O(n²)
// Space Complexity: O(1)

// BETTER SOLUTION (Sorting)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;
    }
};
// Time Complexity: O(n log n)
// Space Complexity: O(1) or O(n)

// OPTIMAL SOLUTION (Hash Table)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
            if (freq[x] > 1) {
                return true;
            }
        }
        return false;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)

// OPTIMAL SOLUTION (Using Set)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)
