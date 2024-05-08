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
        int sum = 1440;
       int h,m;
       cin>>h>>m;

       h = h * 60;
       sum -= h;
       sum -= m;

       cout<<sum<<endl;
    }
    return 0;
}
