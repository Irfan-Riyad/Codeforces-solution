#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
    int s,i=0,count = 0;
    cin>>s;

 int coins[] = {100, 20, 10, 5,1};  
 
    
    while(s > 0) {
        int num = s / coins[i];
        if(num > 0){
        count += num;
        }
        s -= num * coins[i];
        i++;
    }
    cout<<count<<endl;


    return 0;
}
