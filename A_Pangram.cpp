#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main(){
    int n,counter = 0;
    cin>>n;
    vector<char> str(n);

    if(n < 26){
        cout<<"NO";
        return 0;
    }

    for(int i=0;i<n;i++){
        cin>>str[i];

        str[i] =  tolower(str[i]); 
    }
    sort(str.begin(), str.end());

    for(int i=0;i<n;i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
       
            if(str[i] != str[i-1]){
            counter++;
        }
    }
       
    }

    if(counter == 26){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

 
return 0;
}