#include <bits/stdc++.h>
using namespace std;
#define RASENGAN                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

int main()
{
    RASENGAN;
    int n, div = 0;
    cin >> n;
    if (n % 2 == 1)
    {
        div = (n / 2);
        cout << div << endl;
        cout<< 3 << " ";
        for (int i = 0; i < div - 1; i++)
            cout << 2 << " ";
        cout << endl;
    }
    else
    {
        div = n / 2;
        cout << div << endl;
        for (int i = 0; i < div; i++)
            cout << 2 << " ";
        cout << endl;
    }
    return 0;
}
