#include <bits/stdc++.h>
using namespace std;
#define RASENGAN ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main()
{
    RASENGAN;
     int n;
    cin>>n;
    int a[15][15];
    for(int i=1; i<=1; i++)
    {
        for(int j=1; j<=n; j++)
            a[i][j]=1;
    }
    for(int i=2; i<=n; i++)
    {
        a[i][1]=1;
        for(int j=2; j<=n; j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    cout<<a[n][n]<<endl;
    
   

    return 0;
}
