// A left rotation operation on a circular array shifts each of the array's elements 1 unit to the left. The elements that fall off the left end reappear at the right end. Given an integer d, rotate the array that many steps to the left and return the result.

// BRUTE FORCE APPROACH
#include <bits/stdc++.h>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();  
    d %= n;
    vector<int> temp;
    
    for(int i = 0; i < d; i++) {
        temp.push_back(arr[i]); 
    }
    
    for(int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }
    
    for(int i = n - d; i < n; i++) {
        arr[i] = temp[i - (n - d)];
    }
    return arr;
}
// Time Complexity: O(d) + O(n - d) + O(d) ~ O(n + d) ~ O(n)
// Space Complexity: O(d)

// OPTIMAL SOLUTION
#include <bits/stdc++.h>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    d %= n;
    
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
    return arr;
}
// Time Complexity: O(n) + O(n - d) + O(d) ~ O(2n) ~ O(n)
// Space Complexity: O(1)
