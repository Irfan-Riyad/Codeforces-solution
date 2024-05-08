#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,e=0,o=0,en=0,on=0;
    cin>>n;

    vector<int> m(n);

    for(int i = 0; i<n; i++){
        cin>>m[i];
    }
    int i = 0;
         if(m[i] %2 == 0){
            while(m[i] % 2 == 0){
                i++;
                e++;
                en = i;
            }
        }
        else{
            while(m[i] % 2 != 0){
                i++;
                o++;
                on = i;
            }
           
        }

        if(e == 1){
            cout<< en +1<<endl;
        }else{
            cout<< on + 1<<endl;
        }

 
return 0;
}