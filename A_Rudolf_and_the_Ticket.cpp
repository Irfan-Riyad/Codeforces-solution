#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int countValidPairs(int n, int m, int k, vector<int>& leftCoins, vector<int>& rightCoins) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (leftCoins[i] + rightCoins[j] <= k) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k; 
        vector<int> leftCoins(n);
        vector<int> rightCoins(m);
        for (int i = 0; i < n; ++i) {
            cin >> leftCoins[i]; 
        }
        for (int i = 0; i < m; ++i) {
            cin >> rightCoins[i]; 
        }
        
        int result = countValidPairs(n, m, k, leftCoins, rightCoins);
        cout << result << endl;
    }
    return 0;
}