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

 for(int i = 1; i<=n; i++){
    if(i % 2 != 0){
        cout<<"I hate ";
    }
    else{
        cout<<"I love ";
    }
    if(i != n){
    cout<<"that ";
    }
}
cout<<"it";
return 0;
}
 
 
