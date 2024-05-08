#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,time_distance,sum = 0,counter = 0,sum2 = 0;
    int per_problem = 5;
    int total_time = 240;

    cin>>n>>time_distance;

    

    if(time_distance <= total_time ){
        for(int i = 1; i<=n; i++){

            sum += i * per_problem;
            sum2 = sum + time_distance;

            if(sum2 <= total_time){
                counter++;
            }
            else{
                break;
            }
        }

        cout<<counter<<endl;
    }
    else{
        cout<<"0";
    }

 
 
return 0;
}