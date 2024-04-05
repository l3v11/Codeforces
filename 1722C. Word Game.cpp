#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using str = string;

using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<ld>;
using vs = vector<str>;
using vc = vector<char>;
using vb = vector<bool>;

#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define eb emplace_back

const int mod = 1e9 + 7; // 998244353;
const int MAX = 2e5 + 5;
const ll INF = 1e18;

#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int n;
    cin >> n;

    map<string, int> mp;
    str s[3][n];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> s[i][j];
            mp[s[i][j]]++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (mp[s[i][j]] == 1) cnt += 3;
            else if (mp[s[i][j]] == 2) cnt += 1;
        }
        cout << cnt << ' ';
    }
    cout << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    while (tc--)
        solve();
}
