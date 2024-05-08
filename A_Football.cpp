#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main(){
 string str;
 int c=0;
 cin>>str;

 for(int i = 0; i<str.size(); i++){
    if(str[i] == str[i+1]){
        c++;
        if(c >= 6){
            cout<<"YES";
            exit(0);
        }
    }
    else{
        c=0;
    }
 }
 cout<<"NO";
 
return 0;
}