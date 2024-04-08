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
    int n, m, k;
    cin >> n >> m >> k;

    map<int, int> mp1, mp2;
    vi a(n), b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    for (int x : b) mp1[x]++;
    for (int i = 0; i < m; i++) mp2[a[i]]++;

    int cur = 0, ans = 0;
    for (auto it : mp1)
    {
        int val = it.first;
        if (mp2.find(val) != mp2.end())
            cur += min(mp1[val], mp2[val]);
    }

    if (cur >= k) ans++;

    if (n == m) {
        cout << ans << nl;
        return;
    }

    for (int i = 0; i < n - m; i++)
    {
        if (a[i] != a[i + m])
        {
            cur -= min(mp1[a[i]], mp2[a[i]]);
            cur -= min(mp1[a[i + m]], mp2[a[i + m]]);
            mp2[a[i]]--;
            mp2[a[i + m]]++;
            cur += min(mp1[a[i]], mp2[a[i]]);
            cur += min(mp1[a[i + m]], mp2[a[i + m]]);
        }

        if (cur >= k) ans++;
    }
    
    cout << ans << nl;
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
