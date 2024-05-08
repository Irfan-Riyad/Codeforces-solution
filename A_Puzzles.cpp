#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,m,sum = 0;
    cin>>n>>m;

    vector<int> v;
    vector<int> s;

    for(int i = 0; i<m; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    for(int i = 0; i<n-1; i++){
        sum = v[n-(i+1)-1] - v[n-1] ;
        s.push_back(sum);
        sum = 0;
    }

   
        int max =*max_element(s.begin(), s.end());

        if(max < 0){
            cout<<"0";
        }
        else{
            cout<<max;
        }
    
    return 0;
}
