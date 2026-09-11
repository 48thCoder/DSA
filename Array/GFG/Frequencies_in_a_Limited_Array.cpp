// You are given an array arr[] containing positive integers. The elements in the array arr[] range from  1 to n (where n is the size of the array), and some numbers may be repeated or absent. Your have to count the frequency of all numbers in the range 1 to n and return an array of size n such that result[i] represents the frequency of the number i (1-based indexing).

// BRUTE FORCE APPROACH (TLE)
class Solution {
	public:
	vector<int> frequencyCount(vector<int>& arr) {
		int n = arr.size();
		vector<int> result;
		for (int i = 1; i <= n; i++) {
			int count = 0;
			for (int j = 0; j < n; j++) {
				if (arr[j] == i) {
					count++;
				}
			}
			result.push_back(count);
		}
		return result;
	}
};
// Time Complexity: O(n²)
// Space Complexity: O(n)

// USING HASHING
class Solution {
	public:
	vector<int> frequencyCount(vector<int>& arr) {
		int n = arr.size();
		vector<int> hash(n + 1, 0);
		for (int i = 0; i < n; i++) {
			hash[arr[i]] += 1;
		}
		vector<int> result(hash.begin() + 1, hash.end());
		return result;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(n)

// USING UNORDERED MAP
class Solution {
	public:
	vector<int> frequencyCount(vector<int>& arr) {
		int n = arr.size();
		unordered_map<int, int> freq;
		for (int i = 0; i < n; i++) {
			freq[arr[i]]++;
		}
		vector<int> result(n, 0);
		for (int i = 1; i <= n; i++) {
			if (freq.find(i) != freq.end()) {
				result[i - 1] = freq[i];
			}
		}
		return result;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(n)
