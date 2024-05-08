#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, m, c, sum1 = 0, sum2 = 0;
    cin >> t;
    
    while (t--) {
        cin >> m >> c;
        
        if (m > c) {
            sum1++;
        } else if (c > m) {
            sum2++;
        }
    }
    
    if (sum1 == sum2) {
        cout << "Friendship is magic!^^";
    } else if (sum1 > sum2) {
        cout << "Mishka";
    } else {
        cout << "Chris";
    }
    
    return 0;
}
