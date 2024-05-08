#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n,a,b,sum = 0,c=0;
    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>a>>b;
        
        sum = b - a;

        if(sum > 1){
            c++;
        }
       }
    cout<<c;

  return 0;
}
