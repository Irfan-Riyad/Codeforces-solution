#include <bits/stdc++.h>
using namespace std;
#define RASENGAN ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main()
{
    RASENGAN;
    int t;
    cin >> t;
    while (t--)
    {
       int a[3], n;
		cin >> a[0] >> a[1] >> a[2] >> n;
		sort(a, a + 3);
		n -= 2 * a[2] - a[1] - a[0];
		if (n < 0 || n % 3 != 0) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
    }
    return 0;
}
