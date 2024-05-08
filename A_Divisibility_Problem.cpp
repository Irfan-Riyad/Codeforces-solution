#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define line cout << endl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(x) x.begin(), x.end()
#define fl(i, a, b) for (int i = a; i < b; ++i)
#define frl(i, a, b) for (int i = a; i <= b; ++i)
#define getMax(a, b) ((a) > (b) ? (a) : (b))
#define getMin(a, b) ((a) < (b) ? (a) : (b))

using namespace std;

int main()
{
    int t,move = 0;
    cin >> t; 

    while (t--)
    {
        int a, b;
        cin >> a >> b; 

        if (a % b == 0)
        {
            cout << 0 << endl; 
        }
        else
        {
            while( a % b != 0){
                a++;
                move++;
            }
            cout << move << endl;
            move = 0;
        }
    }

    return 0;
}
