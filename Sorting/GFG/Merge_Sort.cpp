// Given an array arr[], its starting position l and its ending position r. Sort the array using the merge sort algorithm.

class Solution {
	public:
	void mergeSort(vector<int>& arr, int l, int r) {
		if (l >= r) {
			return;
		}
		
		int mid = (l + r) / 2;
		mergeSort(arr, l, mid);
		mergeSort(arr, mid + 1, r);
		merge(arr, l, mid, r);
	}
	
	void merge(vector<int>& arr, int l, int mid, int r) {
		vector<int> result;
		int left = l;
		int right = mid + 1;
		
		while (left <= mid && right <= r) {
			if (arr[left] <= arr[right]) {
				result.push_back(arr[left]);
				left++;
			}
			else {
				result.push_back(arr[right]);
				right++;
			}
		}
		
		while (left <= mid) {
			result.push_back(arr[left]);
			left++;
		}
		
		while (right <= r) {
			result.push_back(arr[right]);
			right++;
		}
		
		for (int i = l; i <= r; i++) {
			arr[i] = result[i - l];
		}
	}
};

// Time Complexity: O(n log n)
// Space Complexity: O(n)
