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
    ll n, c, d;
    cin >> n >> c >> d;
    
    vl a(n * n);
    for (int i = 0; i < n * n; i++) cin >> a[i];

    ll min_a = *min_element(all(a));
    unordered_map<ll, ll> mp;

    for (auto x : a) mp[x]++;

    vector<vl> mat(n, vl(n, 0));
    mat[0][0] = min_a;

    for (int i = 0; i < n; i++)
    {
        if (i != 0) mat[i][0] = mat[i - 1][0] + c;
        for (int j = 0; j < n; j++)
            if (j != 0) mat[i][j] = mat[i][j - 1] + d;

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int tmp = mat[i][j];
            if (mp.find(tmp) == mp.end())
            {
                no;
                return;
            }
            else
            {
                mp[tmp]--;
                if (mp[tmp] == 0) mp.erase(tmp);
            }
        }
    }
    yes;
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
