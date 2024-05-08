#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    vector<int> v;

    for(int i = 0; i<4; i++){
        cin>>n;
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    int c = v[3] - v[0];
    int b = v[3] - v[2];
    int a = v[3] - v[1];

    cout<<a<<" "<<b<<" "<<c;


 
 
return 0;
}