// Given an unsorted array arr containing both positive and negative numbers. Your task is to rearrange the array and convert it into an array of alternate positive and negative numbers without changing the relative order.

// BRUTE FORCE APPROACH
class Solution {
	public:
	void rearrange(vector<int> &arr) {
		int n = arr.size();
		
		for (int i = 0; i < n; i++) {
			if ((arr[i] >= 0 && i % 2 == 0) || (arr[i] < 0 && i % 2 != 0)) {
				continue;
			}
			
			int j = i + 1;
			while (j < n && ((arr[j] >= 0) == (arr[i] >= 0))) {
				j++;
			}
			
			if (j == n) {
				break;
			}
			
			int temp = arr[j];
			while (j > i) {
				arr[j] = arr[j - 1];
				j--;
			}
			arr[i] = temp;
		}
	}
};
// Time Complexity: O(n²)
// Space Complexity: O(1)

// OPTIMAL APPROACH
class Solution {
	public:
	void rearrange(vector<int> &arr) {
		int n = arr.size();
		vector<int> pos, neg;
		
		for (int x : arr) {
			if (x >= 0) {
				pos.push_back(x);
			} else {
				neg.push_back(x);
			}
		}
		
		int k = min(pos.size(), neg.size());
		for (int i = 0; i < k; i++) {
			arr[2 * i] = pos[i];
			arr[2 * i + 1] = neg[i];
			
		}
		
		int idx = 2 * k;
		if (pos.size() > neg.size()) {
			for (int i = k; i < pos.size(); i++) {
				arr[idx++] = pos[i];
			}
		}
		else {
			for (int i = k; i < neg.size(); i++) {
				arr[idx++] = neg[i];
			}
		}
	}
};
// Time Complexity: O(n) + O(n) + O(n) ~ O(n + n + n) ~ O(3n) ~ O(n)
// Space Complexity: O(n)
