#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,sum = 0;
    string str;
    cin>>n;

    vector<string> s = {"Tetrahedron","Cube","Octahedron","Dodecahedron","Icosahedron"};
    vector<int> su = {4,6,8,12,20};
    while(n--){
        cin>>str;

        for(int i = 0; i<s.size(); i++){
        if(str == s[i]){
            sum += su[i];
        }
    }   
}

cout<<sum;
 
return 0;
}