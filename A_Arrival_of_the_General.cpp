#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int maximum = 0, minimum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > a[i+1]){
            maximum = i;
        } 
        if (a[i] <= a[i +1]) {
            minimum = i;
        }
    }

   cout<<maximum<<" "<<minimum<<endl;
}
