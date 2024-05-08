#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

   
    vector<int> v(m, 0);
    for (int i = 0; i < n; ++i) {
        int f;
        cin >> f;
        v[f - 1]++;
    }

    
    for (int i = 0; i < m; ++i) {
        int d = (v[i] + 11) / 12;
        cout << d << endl;
    }

    return 0;
}
