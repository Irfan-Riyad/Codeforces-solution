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
       
        int m, k, n;
        cin >> n >> m >> k;

      
        if ((n + m - 1) / m + k >= n)
            cout << "NO\n";
        else
            cout << "YES\n";
    
    }
    return 0;
}
