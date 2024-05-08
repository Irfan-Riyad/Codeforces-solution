#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> a[i];
        }
        
        int even = 0, odd = 0;
        for (int i = 0; i < 2 * n; ++i) {
            if (a[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
        
        if (even == odd) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
