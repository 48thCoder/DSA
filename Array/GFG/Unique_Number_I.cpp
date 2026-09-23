// Given a unsorted array arr[] of positive integers having all the numbers occurring exactly twice, except for one number which will occur only once. Find the number occurring only once.

// BRUTE FORCE APPROACH
class Solution {
	public:
	int findUnique(vector<int> &arr) {
		int n = arr.size();
		
		for (int i = 0; i < n; i++) {
			int count = 0;
			
			for (int j = 0; j < n; j++) {
				if (arr[j] == arr[i]) {
					count++;
				}
			}
			
			if (count == 1) {
				return arr[i];
			}
		}
		return - 1;
	}
};
// Time Complexity: O(n²)
// Space Complexity: O(1)

// BETTER APPROACH (Sorting)
class Solution {
	public:
	int findUnique(vector<int> &arr) {
		int n = arr.size();
		sort(arr.begin(), arr.end());
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] != arr[i + 1]) {
				return arr[i];
			}
			i++;
		}
		return arr[n - 1];
	}
};
// Time Complexity: O(n log n) + O(n) ~ O(n log n)
// Space Complexity: O(1)

// USING HASH MAP
class Solution {
	public:
	int findUnique(vector<int> &arr) {
		unordered_map<int, int> freq;
		for (int x : arr) {
			freq[x]++;
		}
		
		for (auto x : freq) {
			if (x.second == 1) {
				return x.first;
			}
		}
		return - 1;
	}
};
// Time Complexity: O(n) + O(n) ~ O(n + n) ~ O(n)
// Space Complexity: O(n)

// OPTIMAL SOLUTION (Using XOR)
class Solution {
	public:
	int findUnique(vector<int> &arr) {
		int n = arr.size();
		int x = 0;
		for (int i = 0; i < n; i++) {
			x ^= arr[i];
		}
		return x;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(1)
