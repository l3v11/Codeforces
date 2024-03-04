#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

using ll = long long;
using ld = long double;
using str = string;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define mp make_pair
#define f first
#define s second

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

const int mod = 998244353; // 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;

    vi c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];

    int i, j, left = 0, right = 0;
    int k_left = k, k_right = k;

    if (c[0] == c[n - 1])
    {
        k_left = k / 2;
        k_right = k - k_left;
    }

    for (i = 0; i < n && left < k_left; i++)
    {
        if (c[i] == c[0])
            left++;
    }

    for (j = n - 1; j >= 0 && right < k_right; j--)
    {
        if (c[j] == c[n - 1])
        {
            right++;
        }
    }

    if (i - 1 < j + 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    while (tc--)
        solve();

    return 0;
}
