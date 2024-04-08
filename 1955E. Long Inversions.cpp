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

bool fn(vi &a, int k)
{
    int n = a.size();
    vi tmp(n, 0);

    for (int i = 0; i <= n - k; i++)
    {
        int cur = a[i];
        int ops = 0;

        if (i > 0) ops += tmp[i - 1];

        int idx = max(0LL, static_cast<long long>(i - k + 1));

        if (idx > 0) ops -= tmp[idx - 1];
        if (ops % 2) cur = 1 - cur;
        if (i > 0) tmp[i] = tmp[i - 1];
        if (cur == 0) tmp[i]++;

    }

    for (int i = n - k + 1; i < n; i++)
    {
        tmp[i] = tmp[i - 1];
        int cur = a[i];
        int ops = tmp[i - 1];
        int idx = max(0LL, static_cast<long long>(i - k + 1));

        if (idx > 0) ops -= tmp[idx - 1];

        if (ops % 2) cur = 1 - cur;

        if (cur == 0) return false;

    }

    return true;
}

void solve()
{
    int n; str s;
    cin >> n >> s;
    
    vi a(n, 0);
    for (int i = 0; i < n; i++)
        if (s[i] == '1') a[i] = 1;

    for (int k = n; k >= 1; k--)
    {
        if (fn(a, k))
        {
            cout << k << nl;
            return;
        }
    }
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
