#include<bits/stdc++.h>
#include<iostream>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define line cout << endl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(x) x.begin(), x.end()
#define fl(i, a, b) for(int i = a; i < b; ++i)
#define frl(i, a, b) for(int i = a; i <= b; ++i)
#define getMax(a, b) ((a) > (b) ? (a) : (b))
#define getMin(a, b) ((a) < (b) ? (a) : (b))

using namespace std;
int main() {
    int n;
    cin >> n;
    
    vector<bool> pass(n+1, false);

    int p;
    cin >> p;
    for(int i = 0; i < p; i++) {
        int level;
        cin >> level;
        pass[level] = true;
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int level;
        cin >> level;
        pass[level] = true;
    }

    bool canPass = true;
    for(int i = 1; i <= n; i++) {
        if(!pass[i]) {
            canPass = false;
            break;
        }
    }

    if(canPass) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}