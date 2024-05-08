#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,power,a,b;
    bool can = true;
    cin>>power>>n;

    vector<pair<int, int>> v;

    for(int i = 0; i<n; i++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(), v.end());

    for(int i = 0; i<n; i++){
        if(power > v[i].first){
            power += v[i].second;
        }
         else{
			 cout<<"NO";
             return 0;
		 }

    }
    cout<<"YES";
    return 0;
}
