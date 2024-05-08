#include <bits/stdc++.h>
using namespace std;
#define RASENGAN                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

int main()
{
    RASENGAN;
    string s;
    cin >> s;
    char start = 'a';
    long long sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        long long l1 = abs(s[i] - start);
        long long l2 = 26 - abs(l1);
        sum += min(l1, l2);
        start = s[i];
    }
    cout << sum << endl;

    return 0;
}
