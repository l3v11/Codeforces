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
    int n, k;
    cin >> n >> k;

    vi b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int yr = 2023;
    ll prod = 1;
    for (int i = 0; i < n; i++)
        prod *= b[i];

    if (yr % prod)
    {
        cout << "NO\n";
        return;
    }

    yes;
    cout << yr / prod;
    for (int i = 0; i < k - 1; i++)
        cout << " 1";
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
