// You are given an array arr[] of non-negative integers. You have to move all the zeros in the array to the right end while maintaining the relative order of the non-zero elements. The operation must be performed in place, meaning you should not use extra space for another array.

// BRUTE FORCE APPROACH
class Solution {
	public:
	void pushZerosToEnd(vector<int>& arr) {
		int n = arr.size();
		vector<int> temp(n, 0);
		
		int index = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] != 0) {
				temp[index] = arr[i];
				index++;
			}
		}
		
		for (int i = 0; i < n; i++) {
			arr[i] = temp[i];
		}
	}
};
// Time Complexity: O(n) + O(x) + O(n - x) ~ O(2n) ~ O(n)
// Space Complexity: O(n)

// OPTIMAL SOLUTION (Two Pointer)
class Solution {
	public:
	void pushZerosToEnd(vector<int>& arr) {
		int n = arr.size();
		int j = -1;
		
		for (int i = 0; i < n; i++) {
			if (arr[i] == 0) {
				j = i;
				break;
			}
		}
		
		if (j == -1) {
			return;
		}
		
		for (int i = j + 1; i < n; i++) {
			if (arr[i] != 0) {
				swap(arr[i], arr[j]);
				j++;
			}
		}
	}
};
// Time Complexity: O(x) + O(n - x) ~ O(n)
// Space Complexity: O(1)
