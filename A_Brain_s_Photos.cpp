#include <bits/stdc++.h>
using namespace std;
#define RASENGAN                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

int main()
{
    RASENGAN;
    int i, s = 0, co = 0, j, n, m;

    cin >> n >> m;
    char o;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> o;
            if (o == 'C' || o == 'M' || o == 'Y')
                s = 1;
        }
    }
    if (s){
        cout<<"#Color";
    }
    else{
        cout<<"#Black&White";
    }
    return 0;
}
