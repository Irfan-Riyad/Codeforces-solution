#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minNewProblems(int n, vector<int>& a, vector<int>& b) {
    int totalNewProblems = 0;
    for (int i = 0; i < n; ++i) {
        int diff = b[i] - a[i];
        if (diff > 0) {
            totalNewProblems += diff;
        }
    }
    return totalNewProblems;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        int result = minNewProblems(n, a, b);
        cout << result << endl;
    }

    return 0;
}
