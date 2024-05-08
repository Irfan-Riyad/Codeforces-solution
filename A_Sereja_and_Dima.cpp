#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "0 0";
        return 0;
    }

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int left = 0, right = n - 1;
    int p1 = 0, p2 = 0;
    bool p1_turn = true;

    while (left <= right) {
        if (p1_turn) {
            p1 += max(v[left], v[right]);
        } else {
            p2 += max(v[left], v[right]);
        }
        if (v[left] > v[right]) {
            left++;
        } else {
            right--;
        }
        p1_turn = !p1_turn;
    }

    cout << p1 << " " << p2;

    return 0;
}
