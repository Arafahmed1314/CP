#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fx(x) fixed<<setprecision(x)
using namespace std;

void speed() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}

void solve() {
    int n;
    cin >> n; // Read the size of the array
    vector<int> arr(n);

    // Read the array elements from the user
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Calculate the total sum of the array
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        totalSum += arr[i];
    }

    int firstHalfSum = 0;
    int minDifference = totalSum;  // Start with the largest possible difference

    // Start adding numbers to the first half until the difference is minimized
    for (int i = 0; i < n; ++i) {
        firstHalfSum += arr[i];
        int secondHalfSum = totalSum - firstHalfSum;
        int difference = abs(firstHalfSum - secondHalfSum);

        // Check if this is the smallest difference we've found so far
        if (difference < minDifference) {
            minDifference = difference;
        }
    }

    // Output the result
    cout << minDifference << endl;
}

int main() {
    speed();
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}
