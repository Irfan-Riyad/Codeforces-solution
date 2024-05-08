#include <bits/stdc++.h>
using namespace std;
#define RASENGAN ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main()
{
    RASENGAN;
    int t, n;
    
    cin >> t;
    while (t--)
    {
        cin >> n;
        char ch[100];
        vector<char> v;

        for (int i = 0; i < n; i++)
        {
            cin >> ch[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (ch[i] != ch[i - 1])
            {
                v.push_back(ch[i]);
            }
        }


        
        sort(v.begin(), v.end());

       
        bool hasDuplicates = false;
        for (int i = 0; i < v.size() ; i++)
        {
            if (v[i] == v[i - 1])
            {
                hasDuplicates = true;
                break;
            }
        }

        if (hasDuplicates)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
