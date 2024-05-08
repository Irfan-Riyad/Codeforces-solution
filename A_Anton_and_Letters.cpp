#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    str.erase(remove(str.begin(), str.end(), '{'), str.end());
    str.erase(remove(str.begin(), str.end(), ','), str.end());
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    str.erase(remove(str.begin(), str.end(), '}'), str.end());

   // cout << str << endl << endl;

    int count = 0, count2 = 0;
    int i = 0;
    while (i < str.size()) {
        int j = i + 1;
        while (j < str.size() && str[i] == str[j]) {
            j++;
        }
        if (j - i > 1) {
            count++;
            i = j;
        } else {
            count2++;
            i++;
        }
    }

    cout << count + count2<< endl;
   

    return 0;
}
