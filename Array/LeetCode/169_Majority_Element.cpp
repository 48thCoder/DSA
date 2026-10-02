// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// BRUTE FORCE APPROACH
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
            if (count > n / 2) {
                return nums[i];
            }
        }
        return 0;
    }
};
// Time Complexity: O(n²)
// Space Complexity: O(1)

// USING SORTING (With Count)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int count = 1;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                count++;
            }
            if (count > n / 2) {
                return nums[i];
            }
        }
        return nums[0];
    }
};
// Time Complexity: O(n log n)
// Space Complexity: O(1) or O(n)

// USING SORTING (w/o Count)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return nums[n / 2];
    }
};
// Time Complexity: O(n log n)
// Space Complexity: O(1) or O(n)

// USING HASHMAP
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
            if (freq[x] > n / 2) {
                return x;
            }
        }
        return nums[0];
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)

// OPTIMAL (Boyre-Moore Voting Algo)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majElem = 0, count = 0;

        for (int i = 0; i < n; i++) {
            if (count == 0) {
                majElem = nums[i];
            }
            
            if (nums[i] == majElem) {
                count++;
            } else {
                count--;
            }
        }
        return majElem;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)
