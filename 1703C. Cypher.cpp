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

    vi a(n);
    for (auto &num : a) cin >> num;

    for (int i = 0; i < n; i++)
    {
        int b; str s;
        cin >> b >> s;

        for (int j = 0; j < b; j++)
        {
            if (s[j] == 'U')
                a[i] = (a[i] - 1 + 10) % 10;
            else
                a[i] = (a[i] + 1) % 10;
        }
    }

    for (auto num : a) cout << num << ' ';
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
