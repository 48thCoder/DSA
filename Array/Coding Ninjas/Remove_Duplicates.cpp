// Ninja is playing with numbers but hates when he gets duplicate numbers. Ninja is provided an array, and he wants to remove all duplicate elements and return the array, but he has to maintain the order in which the elements were supplied to him.

// BRUTE FORCE APPROACH
#include <bits/stdc++.h> 
vector<int> removeDuplicates(vector<int> arr) {
	int n = arr.size();
	vector<int> result;
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(arr[j] == arr[i]) {
				arr[j] = -1;
			}
		}
	}
	
	for(int i = 0; i < n; i++) {
		if(arr[i] != -1) {
			result.push_back(arr[i]);
		}
	}
	return result;
}
// Time Complexity: O(n²) + O(n) ~ O(n² + n) ~ O(n²)
// Space Complexity: O(n)

// OPTIMAL SOLUTION -> Using HashMap (Freq. Count)
#include <bits/stdc++.h> 
vector<int> removeDuplicates(vector<int> arr) {
	int n = arr.size();
	vector<int> result;
	unordered_map<int, int> freq;
	for(int x : arr) {
		freq[x]++;
	}

	for(int i = 0; i < n; i++) {
		if(freq[arr[i]] != -1) {
			result.push_back(arr[i]);
			freq[arr[i]] = -1;
		}
	}
	return result;
}
// Time Complexity: O(n) + O(n) ~ O(n + n) ~ O(n)
// Space Complexity: O(n) + O(n) ~ O(n + n) ~ O(n)
