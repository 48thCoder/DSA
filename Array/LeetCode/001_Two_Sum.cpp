// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// BRUTE FORCE APPROACH
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
// Time Complexity: O(n²)
// Space Complexity: O(1)

// BETTER APPROACH (Sorting)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> temp;

        for (int i = 0; i < n; i++) {
            temp.push_back({nums[i], i});
        }

        int l = 0, r = n - 1;
        sort(temp.begin(), temp.end());

        while (l < r) {
            int sum = temp[l].first + temp[r].first;

            if (sum == target) {
                return {min(temp[l].second, temp[r].second),
                        max(temp[l].second, temp[r].second)};
            } else if (sum < target) {
                l++;
            } else {
                r--;
            }
        }
        return {};
    }
};
// Time Complexity: O(n log n) + O(n) ~ O(n log n)
// Space Complexity: O(n)

// OPTIMAL SOLUTION (Hash Map)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> ump;
        for (int i = 0; i < n; i++) {
            int a = nums[i];
            int rem = target - a;
            if (ump.find(rem) != ump.end()) {
                return {ump[rem], i};
            }
            ump[a] = i;
        }
        return {-1, -1};
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)
