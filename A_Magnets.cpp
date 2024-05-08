#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n, m[100000], c = 1; 
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> m[i];

        if(i > 0 && m[i] != m[i - 1]){ 
            c++;
        }
    }
    
    cout << c;

    return 0;
}
