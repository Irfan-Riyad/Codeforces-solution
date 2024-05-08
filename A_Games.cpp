#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,a,b,counter = 0;
    cin>>n;

    vector<int> data(n);
    vector<int> data2(n);

    for(int i = 0; i<n; i++){
        cin>> data[i] >> data2[i];
    }
   
   for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(data[i] == data2[j]){
                counter++;
            }
        }
   }

        cout<<counter<<endl;

 
return 0;
}