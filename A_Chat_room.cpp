#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    string str,t;
    int c=0;
    cin >> str;

    t = "hello";
    int j = 0;

    for(int i = 0; i<str.size(); i++){
        if(str[i] == t[j]){
            c++;
            j++;
        }
    }

    if(c == t.size()){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    

    return 0;
}
