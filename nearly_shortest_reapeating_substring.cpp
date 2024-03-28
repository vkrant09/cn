#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool is_valid(const string& s, int k) {
    int n = s.length();
    // Iterate through the string and count differing characters
    int diff_count = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] != s[i % k]) {
            ++diff_count;
            // If more than one differing character found, return false
            if (diff_count > 1) {
                return false;
            }
        }
    }
    return true;
}

int shortest_concatenated_string(const string& s) {
    int n = s.length();
    int shortest_length = n;
    // Iterate over possible lengths of k from 1 to n
    for (int k = 1; k <= n; ++k) {
        // Check if k is a divisor of n and if it forms a valid concatenated string
        if (n % k == 0 && is_valid(s, k)) {
            shortest_length = min(shortest_length, k);
        }
    }
    return shortest_length;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << shortest_concatenated_string(s) << endl;
    }
    return 0;
}
