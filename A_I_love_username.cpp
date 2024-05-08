#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n, m, sum = 0,counter = 0,counter2 = 0;
    cin >> n;

    vector<int> v;
    

    for (int i = 0; i < n; i++) {
        cin >> m;
        v.push_back(m);
    }

    for (int i = 0; i < n - 1; i++){
        if(v[i] < v[i+1]){
            counter++;
        }
        else{
            if(v[i] > v[i + 1]){
                counter2++;
            }
        }
    }


    
    if(counter == 0){
         cout<<counter2<<'\n';
    }
    else{
    cout<<counter<<'\n';
    }
 
   
    return 0;
}
