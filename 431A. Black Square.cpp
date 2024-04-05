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
using vb = vector<bool>;

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
    vi a(4);
    for (auto &num : a) cin >> num;

    str s;
    cin >> s;

    int ans = 0;
    for (char c : s)
    {
        if (c == '1')
            ans += a[0];
        else if (c == '2')
            ans += a[1];
        else if (c == '3')
            ans += a[2];
        else if (c == '4')
            ans += a[3];
    }

    cout << ans << nl;
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
