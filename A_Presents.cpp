#include<bits/stdc++.h>
#include<iostream>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define line cout << endl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(x) x.begin(), x.end()
#define fl(i, a, b) for(int i = a; i < b; ++i)
#define frl(i, a, b) for(int i = a; i <= b; ++i)
#define getMax(a, b) ((a) > (b) ? (a) : (b))
#define getMin(a, b) ((a) < (b) ? (a) : (b))

using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> m(n);

   for(int i = 0; i<n; i++){
        cin>>m[i];
   }

   for(int j = 1; j<=n; j++){
    for(int i = 0; i<n; i++){
        if(m[i]==j){
            cout<<i+1<<" ";
        }
    }
   }
 
return 0;
}