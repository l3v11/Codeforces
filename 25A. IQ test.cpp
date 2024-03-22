#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using str = string;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define mp make_pair

using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<ld>;
using vs = vector<str>;
using vc = vector<char>;

#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define eb emplace_back

const int mod = 1e9 + 7; // 998244353;

#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int n;
    cin >> n;

    vi arr(n);
    int evencnt = 0, oddcnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] & 1) oddcnt++;
        else evencnt++;
    }

    for (int i = 0; i < n; i++)
    {
        if (evencnt > oddcnt)
        {
            if (arr[i] & 1)
            {
                cout << i + 1;
                break;
            }
        }
        else
        {
            if (arr[i] % 2 == 0)
            {
                cout << i + 1;
                break;
            }
        }
    }
    cout << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin >> tc;

    while (tc--)
        solve();
}
