#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;


    while(n--){
    int sum = 0, sum2 = 0; 
    string str;
    cin >> str;

    for(int i = 0; i < 3; i++) {
        sum += str[i] - '0'; 
    }

    for(int i = 3; i < str.size(); i++) { 
        sum2 += str[i] - '0'; 
    }

    if(sum == sum2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}

    return 0;
}
