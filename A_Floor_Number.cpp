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
       int n,m,c = 0, c2 = 2;
       cin>>n>>m;

       if(n == 1 || n == 2){
        cout<<"1"<<endl;
        
       }else{

       for(int i = 3; i<=n ;i++){
        c++;
            if(i == n){
                cout<<c2<<endl;
                break;
            }
        if(c == m){
            c2++;
            c = 0;
        }

       }
       }
       
    }
    return 0;
}
