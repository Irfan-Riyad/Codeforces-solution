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
    int n=4,c=0,dif=0;
    long long int a[15];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++)
        if(a[i]!=a[i+1])
            c++;

    cout<<n-c<<endl;
    return 0;
}