// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

// BRUTE FORCE APPROACH -> Using Set
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        unordered_set<int> st;
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (nums1[i] == nums2[j]) {
                    st.insert(nums1[i]);
                }
            }
        }
        return vector<int>(st.begin(), st.end());
    }
};
// Time Complexity: O(n1 * n2)
// Space Complexity: O(min(n1, n2))

// SORTING WITH TWO POINTER
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        vector<int> result;

        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                i++;
            }

            else if (nums2[j] < nums1[i]) {
                j++;
            }

            else {
                if (result.empty() || result.back() != nums1[i]) {
                    result.push_back(nums1[i]);
                }
                i++;
                j++;
            }
        }
        return result;
    }
};
// Time Complexity: O(n1 log n1 + n2 log n2)
// Space Complexity: O(min(n1, n2))

// OPTIMAL SOLUTION -> Using Hash Map
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> result;

        for (int x : nums1) {
            freq[x] = 1;
        }

        for (int x : nums2) {
            if (freq[x] == 1) {
                freq[x] = 0;
                result.push_back(x);
            }
        }

        return result;
    }
};
// Time Complexity: O(n1 + n2)
// Space Complexity: O(min(n1, n2))
