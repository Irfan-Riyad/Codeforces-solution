#include <bits/stdc++.h>
using namespace std;
#define RASENGAN ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int next_prime(int n) {
    int flag = 0;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            flag++;
        }
    }
    if (flag == 1) {
        return n;
    } else {
        next_prime(n + 1);
    }
}

int main() {
    RASENGAN;
    int n, m, r;
    cin >> n>>m;

    
        n++;
        r = next_prime(n);
    
   
   
    if (r == m) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
