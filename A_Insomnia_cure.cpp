#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int k, l, m, n,d;
    cin>>k>>l>>m>>n>>d;
    int cont = d;

    if(k > d || l > d || m > d || n > d){
        cout<<"0";
        exit(0);
    }

    if(k == 1 || l == 1 || m == 1 || n == 1){
        cout<<d;
    }
    else{
        for(int i = 1; i<=d; i++){
             if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0))
                cont--;
        }
        cout<<cont;
    }
 
 
return 0;
}