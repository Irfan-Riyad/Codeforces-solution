#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int a,b,c,s1=0,s2=0,s3=0,s4=0,s5=0;
    cin>>a>>b>>c;

    vector<int> m;

    s1=a+b*c;
    m.push_back(s1);

    s2 = a*(b+c);
    m.push_back(s2);

    s3 = a*b*c;
    m.push_back(s3);

    s4 = (a + b) * c;
    m.push_back(s4);

    s5 = a + (b + c);
    m.push_back(s5);

    int mx = 0;
    for(int i = 0; i<m.size(); i++){
        if(m[i] > mx){
            mx = m[i];
        }
    }
    cout<<mx;
 
 
return 0;
}