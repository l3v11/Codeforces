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
    int n;
    cin >> n;

    int x, single = 0, couple = 0, tripple = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 4) ans++;
        else if (x == 3) tripple++;
        else if (x == 2) couple++;
        else if (x == 1) single++;
    }

    while (tripple)
    {
        if (single)
        {
            ans++;
            tripple--;
            single--;
        }
        else
        {
            ans++;
            tripple--;
        }
    }

    int tmp = couple / 2;
    couple -= 2 * tmp;
    ans += tmp;

    while (couple)
    {
        ans++;
        if (single) single--;
        if (single) single--;
        couple--;
    }
    
    tmp = single / 4;
    single -= 4 * tmp;
    ans += tmp;

    if (single) ans++;
    
    cout << ans;
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
