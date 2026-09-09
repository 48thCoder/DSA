// Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.
// Note: The second largest element should not be equal to the largest element.

// BRUTE FORCE APPROACH
class Solution {
	public:
	int getSecondLargest(vector<int> &arr) {
		int n = arr.size();
		sort(arr.begin(), arr.end());
		int largest = arr[n - 1];
		int secLargest = -1;
		for (int i = n - 2; i >= 0; i--) {
			if (arr[i] != largest) {
				secLargest = arr[i];
				break;
			}
		}
		return secLargest;
	}
};
// Time Complexity: O(n log n) + O(n) ~ O(n log n + n) ~ O(n log n)
// Space Complexity: O(1)

// BETTER APPROACH
class Solution {
	public:
	int getSecondLargest(vector<int> &arr) {
		int n = arr.size();
		int largest = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] > largest) {
				largest = arr[i];
			}
		}
		
		int secLargest = -1;
		for (int i = 0; i < n; i++) {
			if (arr[i] > secLargest && arr[i] != largest) {
				secLargest = arr[i];
			}
		}
		return secLargest;
	}
};
// Time Complexity: O(n) + O(n) ~ O(n + n) ~ O(2n) ~ O(n)
// Space Complexity: O(1)

// OPTIMAL SOLUTION
class Solution {
	public:
	int getSecondLargest(vector<int> &arr) {
		int n = arr.size();
		int largest = arr[0];
		int secLargest = -1;
		for (int i = 1; i < n; i++) {
			if (arr[i] > largest) {
				secLargest = largest;
				largest = arr[i];
			}
			else if (arr[i] != largest && arr[i] > secLargest) {
				secLargest = arr[i];
			}
		}
		return secLargest;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(1)
