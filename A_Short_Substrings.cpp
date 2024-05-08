#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define all(p) p.begin(), p.end()
#define mid(s, e) (s + (e - s) / 2)
#define eb emplace_back
#define ull unsigned long long
#define bug(x) cout << "  [ " #x << " = " << x << " ]" << endl
#define KAMEHAMEHA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define RASENGAN ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void solve()
{
    string str,result;
    cin>>str;

    for(int i = 0; i<str.size()-1; i++){
        if(i == 0){
            result += str[0];
        }

        if(str[i] == str[i-1]){
            result += str[i];
            i++;
        }
    }

    result += str[str.size() - 1];

    cout<<result<<endl;
    

}
 
int main()
{
    KAMEHAMEHA;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
