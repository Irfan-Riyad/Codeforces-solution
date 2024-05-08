#include <iostream>
using namespace std;

int main() {
    int n, m, s = 0; // Initialize s to 0
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m;
        s += m;
    }
    if (s > 0) {
        cout << "HARD";
    } else {
        cout << "EASY";
    }
    return 0;
}
