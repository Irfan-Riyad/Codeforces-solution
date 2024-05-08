#include <bits/stdc++.h>
using namespace std;
#define RASENGAN ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main()
{
    RASENGAN;
    string str,result1, result2;
    cin>>str;

    if(str>"0"){
        cout<<str;
    }else{
        for(int i = 0; i<str.size(); i++){
            if(i == str.size()-1){
                continue;
            }else{
                result1 += str[i];
            }
        }

         for(int i = 0; i<str.size(); i++){
            if(i == str.size()-2){
                continue;
            }else{
                result2 += str[i];
            }
        }

    if(result1 == "-0" || result2 == "-0"){
        cout<<"0";
        return 0;
    }

        if(result1 < result2){
            cout<<result1;
        }else{
            cout<<result2;
        }
    }

   

    return 0;
}
