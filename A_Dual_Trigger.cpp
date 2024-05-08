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
       int n,count = 0,count2 = 0;
       string str;
       cin>>n;
       cin>>str;

       for(int i = 0; i<str.size(); i++){
       if(str[i] == '1'){
        count++;
       }else if(str[i]== '0'){
        count2++;
       }
       }

    //cout<<count<<" "<<count2<<endl;;

    if(count % 2 == 0){
        cout<<"YES"<<endl;
    }else{
        if(count2 % 2 == 1){
            cout<<"YES"<<endl;
        }else{
        cout<<"NO"<<endl;
        }
    }

    }
    return 0;
}
