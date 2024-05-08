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
        vector<int> v(4);
        for(int i = 0; i<4; i++){
            cin>>v[i];
        }

        int r = max(v[0], v[1]);
        int r2 = max(v[2], v[3]);

        sort(v.begin(), v.end());

        if((v[2] == r || v[3] == r) && (v[2] == r2 || v[3] == r2) ){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

       
        
       
    }
    return 0;
}
