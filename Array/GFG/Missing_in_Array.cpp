// You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.

// BRUTE FORCE APPROACH
class Solution {
	public:
	int missingNum(vector<int>& arr) {
		int n = arr.size() + 1;
		for (int i = 1; i <= n; i++) {
			int flag = 0;
			for (int j = 0; j < arr.size(); j++) {
				if (arr[j] == i) {
					flag = 1;
					break;
				}
			}
			if (!flag) {
				return i;
			}
		}
		return n;
	}
};
// Time Complexity: O(n²)
// Space Complexity: O(1)

// BETTER APPROACH (Hashing)
class Solution {
	public:
	int missingNum(vector<int>& arr) {
		int n = arr.size() + 1;
		vector<int> hash(n + 1, 0);
		
		for (int x : arr) {
			hash[x] = 1;
		}
		
		for (int i = 1; i <= n; i++) {
			if (hash[i] == 0) {
				return i;
			}
		}
		return n;
	}
};
// Time Complexity: O(n) + O(n) ~ O(2n) ~ O(n)
// Space Complexity: O(n)

// USING SORT FUNCTION
class Solution {
	public:
	int missingNum(vector<int>& arr) {
		int n = arr.size() + 1;
		sort(arr.begin(), arr.end());
		
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] != i + 1) {
				return i + 1;
			}
		}
		return n;
	}
};
// Time Complexity: O(n log n) + O(n) ~ O(n log n)
// Space Complexity: O(1)

// USING MATHEMATICAL FORMULA
class Solution {
	public:
	int missingNum(vector<int>& arr) {
		long long n = arr.size() + 1;
		long long sum = 0;
		long long total = n * (n + 1) / 2;
		for (int i = 0; i < arr.size(); i++) {
			sum += arr[i];
		}
		return total - sum;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// USING CYCLIC SORT
class Solution {
	public:
	int missingNum(vector<int>& arr) {
		int n = arr.size() + 1;
		int i = 0;
		while (i < arr.size()) {
			int j = arr[i] - 1;
			if (arr[i] < n && arr[i] != arr[j]) {
				swap(arr[i], arr[j]);
			} else {
				i++;
			}
		}
		
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] != i + 1) {
				return i + 1;
			}
		}
		return n;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// OPTIMAL SOLUTION (Bit Manipulation)
class Solution {
	public:
	int missingNum(vector<int>& arr) {
		int n = arr.size() + 1;
        int x = n;

        for (int i = 0; i < arr.size(); i++) {
            x ^= (i + 1) ^ arr[i];
        }
        return x;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(1)
