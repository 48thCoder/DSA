// Given an integer n, print each of its digits starting from the last digit and moving towards the first digit. Separate the digits with a space.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n = abs(n);

    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    while (n > 0)
    {
        int digit = n % 10;
        cout << digit << " ";
        n /= 10;
    }

    return 0;
}

// Time Complexity: O(d) where, d is the no. of digits
// Space Complexity: O(1)