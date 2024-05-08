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
       int n;
       cin>>n;
       vector<int> v(n);
       for(int i = 0; i<n; i++){
        cin>>v[i];
       }

       sort(v.begin(), v.end());

       cout<<v[n-1] - v[0]<<endl;
    }
    return 0;
}
