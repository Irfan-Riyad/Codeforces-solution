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
       int a,b,c;
       cin>>a>>b>>c;

       if(a == b){
        cout<<c<<endl;
       }else if(a == c){
        cout<<b<<endl;
       }else if( b == c){
        cout<<a<<endl;
       }

       
    }
    return 0;
}
