// Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.

// ITERATIVE APPROACH
class Solution{
public:
    void reverse(int arr[], int n){
        for(int i = 0; i < n; i++) {
            if(i == n/2) {
                return;
            }
            swap(arr[i], arr[n - i - 1]);
        }
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// USING TWO POINTERS
void reverse(int arr[], int n) {
    int l = 0, r = n - 1;
    while (l < r) {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}
// Time Complexity: O(n)
// Space Complexity: O(1)

// USING RECURSION
class Solution{
public:
    void reverse(int arr[], int i, int n){
        if(i == n/2) {
            return;
        }
        swap(arr[i], arr[n - i - 1]);
        reverse(arr, i + 1, n);
    }

    void reverse(int arr[], int n){
        reverse(arr, 0, n);
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)

// USING RECURSION (With Two Pointers)
class Solution{
public:
    void reverse(int arr[], int l, int r){
        if(l >= r) {
            return;
        }
        swap(arr[l], arr[r]);
        reverse(arr, l + 1, r - 1);
    }
    
    void reverse(int arr[], int n){
        reverse(arr, 0, n - 1);
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)

// USING BUILT-IN FUNCTION OF C++
#include <bits/stdc++.h>

class Solution{
public:
    void reverse(int arr[], int n){
        std::reverse(arr, arr + n);
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)
