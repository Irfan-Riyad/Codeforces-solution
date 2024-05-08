#include <iostream>
#include <vector>
#include <algorithm> // for max
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    
    int mx = *max_element(v.begin(), v.end());

    int total = 0;
    for (int i = 0; i < n; ++i) {
        
        total += mx - v[i];
    }

    cout << total << endl;

    return 0;
}
