#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> m(n);

    for(int i = 0; i<n; i++){
        cin>>m[i];
    }
    sort(m.begin(), m.end());

    for(int i = 0; i<n; i++){
        cout<<m[i]<<" ";
    }
 
return 0;
}