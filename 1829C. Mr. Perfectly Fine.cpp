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
const ll inf = 1e18;

#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int n;
    cin >> n;

    ll c1 = inf, c2 = inf, ans = inf;
    for (int i = 0; i < n; i++)
    {
        ll m;
        str s;
        cin >> m;
        cin >> s;

        if (s[0] == '1') c1 = min(c1, m);
        if (s[1] == '1') c2 = min(c2, m);
        if (s == "11") ans = min(ans, m);
    }

    ans = min(c1 + c2, ans);

    if (ans == inf) cout << -1 << nl;
    else cout << ans << nl;
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
