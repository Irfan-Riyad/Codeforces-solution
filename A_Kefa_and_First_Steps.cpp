#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n, l(1), ml(1);
    cin>>n;

    vector<int> m(n);


    for(int i = 0; i<n; i++){
        cin>>m[i];

        if(m[i] >= m[i-1]){
            l++;
            ml = max(l, ml);
            
        }
        else{
            
            l = 1;
        }
        
    }

    cout<<ml;

 
return 0;
}