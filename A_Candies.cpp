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

       for(int i = 2; i<10e9; i++){
        int pp = pow(2,i) - 1;
        if(n % pp == 0){
            cout<<n/pp<<endl;
            break;
        }
       }

    }
    return 0;
}
