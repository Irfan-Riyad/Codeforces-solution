#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;

    string target = "HQ9+";
    for(int i = 0; i<str.size(); i++){
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
            cout<<"YES";
            exit(0);
        }

    }
    cout<<"NO";
 
return 0;
}