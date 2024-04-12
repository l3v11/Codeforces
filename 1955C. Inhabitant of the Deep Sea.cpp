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

ll func(vl &a, ll x) {
    ll ans = 0;
    for (ll t : a) {
        if (t <= x) {
            ans++;
            x -= t;
        }
        else return ans;
    }
    return ans;
}

void solve() {
    ll n, k;
    cin >> n >> k;

    vl a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll sum = accumulate(all(a), 0LL);
    if (sum <= k) {
        cout << n << nl;
        return;
    }

    ll ans1 = func(a, (k + 1) / 2);
    reverse(all(a));
    ans1 += func(a, k / 2);
    cout << ans1 << nl;
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
