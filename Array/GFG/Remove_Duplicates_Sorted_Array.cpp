// You are given a sorted array arr[] containing positive integers. Your task is to remove all duplicate elements from this array such that each element appears only once. Return an array containing these distinct elements in the same order as they appeared.

// BRUTE FORCE APPROACH
class Solution {
	public:
	vector<int> removeDuplicates(vector<int> &arr) {
		int n = arr.size();
		set<int> s(arr.begin(), arr.end());
		
		int pos = 0;
		for (auto it : s) {
			arr[pos] = it;
			pos++;
		}
		arr.resize(pos);
		return arr;
	}
};
// Time Complexity: O(n log n)
// Space Complexity: O(n)

// OPTIMAL SOLUTION -> Two Pointer
class Solution {
	public:
	vector<int> removeDuplicates(vector<int> &arr) {
		int n = arr.size();
		int i = 0;
		for (int j = 1; j < n; j++) {
			if (arr[j] != arr[i]) {
				arr[i + 1] = arr[j];
				i++;
			}
		}
		arr.resize(i + 1);
		return arr;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(1)
