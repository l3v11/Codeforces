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
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    if (n % 2 == 0)
    {
        if ((n / 2) * b > (n * a))
            ans = n * a;
        else
            ans = (n / 2) * b;

    }
    else
    {
        if (((n - 1)/ 2) * b > ((n - 1) * a))
            ans = a + ((n - 1) * a);
        else
            ans = a + ((n - 1) / 2) * b;
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
