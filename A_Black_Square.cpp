#include <bits/stdc++.h>
using namespace std;
#define RASENGAN ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main()
{
    RASENGAN;
    string str;
    int result= 0;
    vector<int> v(4);

    for(int i = 0; i<v.size(); i++){
        cin>>v[i];
    }
    cin>>str;

    for(int  i = 0; i<str.size(); i++){
       if(str[i] == '1'){
        result += v[0];
       }else if(str[i] == '2'){
        result += v[1];
       }else if(str[i] == '3'){
        result += v[2];
       }else if(str[i] == '4'){
        result += v[3];
       }
    }

    cout<<result;

    return 0;
}
