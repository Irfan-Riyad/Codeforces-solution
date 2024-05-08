#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define all(p) p.begin(), p.end()
#define mid(s, e) (s + (e - s) / 2)
#define eb emplace_back
#define ull unsigned long long
#define bug(x) cout << "  [ " #x << " = " << x << " ]" << endl
#define RASENGAN ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void solve()
{
    ll n;
  cin >> n;
  if (n & (n - 1)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main()
{
    RASENGAN;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
