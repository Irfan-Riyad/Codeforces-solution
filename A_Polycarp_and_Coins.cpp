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
       int n,r=0,r2=0;
       cin>>n;

       if(n % 3 == 0){
        r = n / 3;
        r2 = n / 3;
       }else if(n % 3 == 1){
        r = (n / 3) + 1;
        r2 = n / 3;
       }else{
        r = (n / 3);
        r2 = (n / 3) + 1;
       }

       cout<<r<<" "<<r2<<endl;
    }
    return 0;
}
