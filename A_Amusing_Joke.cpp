#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    string name1, name2, shaple;
    cin >> name1 >> name2 >> shaple;

    string target = name1 + name2; 

    sort(target.begin(), target.end());
    sort(shaple.begin(), shaple.end());

    if (target == shaple) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
