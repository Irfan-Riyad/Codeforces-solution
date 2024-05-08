#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    for (int i = 0; i < str.size() - 1; i++) {
        if (islower(str[i]) && isupper(str[i + 1])) {
            str[0] = toupper(str[0]);
            str[i + 1] = tolower(str[i + 1]);
        }
        else if(islower(str[i]) && !isupper(str[i + 1])){
            str[i] = str[i];
        }
        else{
            str[i] = str[i];
        }
    }

    cout << str;

    return 0;
}
