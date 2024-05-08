#include <bits/stdc++.h>
using namespace std;
#define RASENGAN ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main()
{
    RASENGAN;
    int t,c=0;
    char str;
    string target = "codeforces";
    cin >> t;
    while (t--)
    {
        cin>>str;
       for(int i = 0; i<target.size(); i++){
        if(str == target[i]){
            c++;
            break;
        }
        
        }
        if(c >= 1){
            c= 0;
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
       }
    
    return 0;
}
