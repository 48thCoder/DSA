// In this challenge, you need to calculate and print the sum of elements in an array, considering that some integers may be very large.

#include <bits/stdc++.h>
using namespace std;

long aVeryBigSum(vector<long> ar) {
    int n = ar.size();
    long long sum = 0;
    
    for(int i = 0; i < n; i++) {
        sum += ar[i];
    }
    return sum;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
