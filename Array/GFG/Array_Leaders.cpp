// You are given an array arr of positive integers. Your task is to find all the leaders in the array. An element is considered a leader if it is greater than or equal to all elements to its right. The rightmost element is always a leader.

// BRUTE FORCE APPROACH -> TLE
class Solution {
	public:
	vector<int> leaders(vector<int>& arr) {
		int n = arr.size();
		vector<int> result;
		
		for (int i = 0; i < n; i++) {
			bool leader = true;
			for (int j = i + 1; j < n; j++) {
				if (arr[j] > arr[i]) {
					leader = false;
					break;
				}
			}
			if (leader) {
				result.push_back(arr[i]);
			}
		}
		return result;
	}
};
// Time Complexity: O(n²)
// Space Complexity: O(1) or O(n)

// OPTIMAL SOLUTION
class Solution {
	public:
	vector<int> leaders(vector<int>& arr) {
		int n = arr.size();
		vector<int> result;
		int maxElem = INT_MIN;
		
		for (int i = n - 1; i >= 0; i--) {
			if (arr[i] >= maxElem) {
				result.push_back(arr[i]);
				maxElem = arr[i];
			}
		}
		reverse(result.begin(), result.end());
		return result;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(1) or O(n)
