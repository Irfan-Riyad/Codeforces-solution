#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int x = 1; 
    int total_cost = k;

    while (total_cost % 10 != 0 && (total_cost - r) % 10 != 0) {
        x++;
        total_cost = k * x;
    }

    cout << x << endl;

    return 0;
}
