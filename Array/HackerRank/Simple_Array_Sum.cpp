// Given an array of integers, find the sum of its elements.

#include <bits/stdc++.h>
using namespace std;

int simpleArraySum(vector<int> ar) {
    int n = ar.size();
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        sum += ar[i];
    }
    return sum;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
