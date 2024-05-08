#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        vector<int> v(m);

        for (int j = 0; j < m; j++) {
            cin >> v[j];
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        bool possible = true;
        for (int j = 0; j < v.size() - 1; j++) {
            if (v[j] + 1 != v[j + 1]) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
