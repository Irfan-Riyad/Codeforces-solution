#include <bits/stdc++.h>
using namespace std;
#define RASENGAN ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main()
{
    RASENGAN;
    int t;;
    cin >> t;

   
    while (t--)
    {
        int j = 0,c = 0;
        string target = "codeforces";
        string str;
        cin>>str;


       for(int i = 0; i<str.size(); i++){
            if(str[i] != target[j]){
                c++;
            }
            j++;
       }

       cout<<c<<endl;
    }
    return 0;
}
